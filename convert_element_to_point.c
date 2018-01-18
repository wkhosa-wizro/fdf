/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_element_to_point.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 18:42:09 by wkhosa            #+#    #+#             */
/*   Updated: 2018/01/12 18:46:41 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/fdf.h"

t_point		element_to_point(t_model *mod, int col, int row)
{
	t_point	point;
	int		index;

	index = (mod->numofcol) * (row - 1) + (col - 1);
	point.z = mod->elem[index];
	if ((mod->numofrow) % 2 == 0)
		point.y = -(2 * row) + (mod->numofrow + 1);
	else
		point.y = -row + (mod->numofrow + 1) / 2;
	if ((mod->numofcol) % 2 == 0)
		point.x = (2 * col) - (mod->numofcol + 1);
	else
		point.x = col - (mod->numofcol + 1) / 2;
	return (point);
}

t_point		element_to_point_by_index(t_model *mod, int index)
{
	t_point	point;
	int		col;
	int		row;

	col = (index % (mod->numofcol) + 1);
	row = (index / (mod->numofcol) + 1);
	point = element_to_point(mod, col, row);
	return (point);
}
