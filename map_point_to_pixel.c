/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_point_to_pixel.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 22:07:45 by wkhosa            #+#    #+#             */
/*   Updated: 2018/01/12 21:11:19 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_point_to_pixel.h"

t_point	map_point_to_pixel(t_point point, t_model *mod, t_mlxwin *w)
{
	t_point	pixel;
	t_point	out_of_range;

	out_of_range.x = -1;
	out_of_range.y = -1;
	pixel.x = (int)(((point.x) * (WIDTH / (mod->numofcol))) + (WIDTH / 2));
	pixel.y = (int)((HEIGHT / 2) - ((point.y) * (HEIGHT / (mod->numofrow))));
	if ((pixel.x > w->width) || (pixel.y > w->height))
		return (out_of_range);
	return (pixel);
}
