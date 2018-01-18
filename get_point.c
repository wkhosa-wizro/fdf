/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_point.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 22:35:24 by wkhosa            #+#    #+#             */
/*   Updated: 2018/01/12 22:39:03 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/fdf.h"

t_point		get_point(t_model *mod, int col, int row)
{
	t_point	point;
	int		index;

	index = (mod->numofcol) * (row - 1) + (col - 1);
	point = mod->obj[index];
	return (point);
}

t_point		get_point_by_index(t_model *mod, int index)
{
	t_point	point;
	int		col;
	int		row;

	col = (index % (mod->numofcol) + 1);
	row = (index / (mod->numofcol) + 1);
	point = get_point(mod, col, row);
	return (point);
}
