/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getdata.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 21:55:22 by wkhosa            #+#    #+#             */
/*   Updated: 2018/01/18 15:58:49 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/fdf.h"

static	int		get_num_of_row(char *path)
{
	int		num_of_row;
	char	*line;
	int		fd;

	num_of_row = 0;
	if ((fd = open(path, O_RDONLY)) < 0)
	{
		perror("Failed to open file:");
		exit(-1);
	}
	while (get_next_line(fd, &line) > 0)
	{
		free(line);
		num_of_row++;
	}
	close(fd);
	return (num_of_row);
}

static	int		get_num_of_col(char *path)
{
	int		num_of_col;
	char	*line;
	int		fd;
	char	**split;

	if ((fd = open(path, O_RDONLY)) < 0)
	{
		perror("Failed to open file:");
		exit(-1);
	}
	get_next_line(fd, &line);
	split = ft_strsplit(line, ' ');
	free(line);
	num_of_col = 0;
	while (split[num_of_col] != '\0')
		num_of_col++;
	close(fd);
	ft_memdeldblptr(split);
	return (num_of_col);
}

static	void	add_line_to_mod(char *line, t_model *mod, int start)
{
	int		index;

	index = 0;
	if (line == NULL)
		return ;
	while (*line)
	{
		mod->elem[start + index++] = ft_atoi(line);
		line = ft_strchr(line, ' ');
		if (line == NULL || *line == '\0')
			return ;
		while (*line == ' ')
			line++;
	}
}

static	int		add_data_to_mod(char *path, t_model *mod)
{
	int		index;
	int		fd;
	char	*line;
	char	*temp;

	if ((fd = open(path, O_RDONLY)) < 0)
	{
		perror("Failed to open file:");
		exit(-1);
	}
	index = 0;
	while (get_next_line(fd, &line) > 0)
	{
		temp = line;
		add_line_to_mod(temp, mod, (mod->numofcol) * index++);
		free(line);
	}
	close(fd);
	return (1);
}

int				get_data(char *path, t_model *mod)
{
	int		len;

	if (mod == NULL)
		return (-1);
	mod->numofcol = get_num_of_col(path);
	mod->numofrow = get_num_of_row(path);
	len = mod->numofcol * mod->numofrow;
	if (!(mod->elem = (double *)malloc(sizeof(double) * len)))
	{
		perror("Failed to allocate memory:");
		exit(-1);
	}
	add_data_to_mod(path, mod);
	return (1);
}
