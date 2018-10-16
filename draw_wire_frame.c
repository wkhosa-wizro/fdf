/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_wire_frame.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 22:39:55 by wkhosa            #+#    #+#             */
/*   Updated: 2018/01/18 16:01:18 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/fdf.h"

static	void	draw_vertical_lines(t_model *mod, t_mlxwin *win)
{
	int		col;
	int		row;
	t_point	pt0;
	t_point	pt1;

	row = 1;
	while (row <= mod->numofrow)
	{
		col = 1;
		while (col < mod->numofcol)
		{
			pt0 = get_point(mod, col, row);
			pt1 = get_point(mod, col + 1, row);
			draw_line(pt0, pt1, mod, win);
			col++;
		}
		row++;
	}
}

static	void	draw_horizontal_lines(t_model *mod, t_mlxwin *win)
{
	int		col;
	int		row;
	t_point	pt0;
	t_point	pt1;

	col = 1;
	while (col <= mod->numofcol)
	{
		row = 1;
		while (row < mod->numofrow)
		{
			pt0 = get_point(mod, col, row);
			pt1 = get_point(mod, col, row + 1);
			draw_line(pt0, pt1, mod, win);
			row++;
		}
		col++;
	}
}

void			draw_wire_frame(t_model *mod, t_mlxwin *win)
{
	draw_vertical_lines(mod, win);
	draw_horizontal_lines(mod, win);
}
