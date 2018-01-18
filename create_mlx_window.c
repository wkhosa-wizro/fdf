/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_mlx_window.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 18:46:33 by wkhosa            #+#    #+#             */
/*   Updated: 2018/01/12 19:13:52 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "create_mlx_window.h"

t_mlxwin	*create_mlx_window(int width, int height, char *title)
{
	int			sizeline;
	int			endian;
	int			bitperpixel;
	t_mlxwin	*p;

	if (!(p = (t_mlxwin *)malloc(sizeof(t_mlxwin))))
		return (NULL);
	bitperpixel = BITS_PER_PIXEL;
	endian = 0;
	p->mlx = mlx_init();
	p->width = width;
	p->height = height;
	sizeline = 4 * p->width;
	p->win = mlx_new_window(p->mlx, p->width + 100, p->height + 100, title);
	p->img = mlx_new_image(p->mlx, p->width, p->height);
	p->img_addr = mlx_get_data_addr(p->img, &bitperpixel, &sizeline, &endian);
	return (p);
}
