/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 14:37:42 by wkhosa            #+#    #+#             */
/*   Updated: 2018/01/12 19:07:05 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display.h"

void		print_matrix(double *matrix, int num_of_col, int num_of_row)
{
	int		col;
	int		row;
	int		fd;
	double	elem;
	int		index;

	fd = 1;
	row = 1;
	while (row <= num_of_row)
	{
		col = 1;
		ft_putstr_fd("[", fd);
		while (col <= num_of_col)
		{
			index = (num_of_col) * (row - 1) + (col - 1);
			elem = matrix[index];
			ft_putnbr_fd(elem, fd);
			ft_putstr_fd(" ", fd);
			col++;
		}
		ft_putendl_fd("]", fd);
		row++;
	}
}

void		print_point(t_point point)
{
	ft_putstr("(");
	ft_putnbr(point.x);
	ft_putstr(" ,");
	ft_putnbr(point.y);
	ft_putstr(" ,");
	ft_putnbr(point.z);
	ft_putendl(")");
}
