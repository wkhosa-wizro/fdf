/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 22:33:12 by wkhosa            #+#    #+#             */
/*   Updated: 2018/01/18 15:50:56 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw_line.h"

int		draw_line(t_point pt0, t_point pt1, t_model *mod, t_mlxwin *w)
{
	double	incr;
	t_point	pt2;

	incr = 0;
	pt0 = map_point_to_pixel(pt0, mod, w);
	pt1 = map_point_to_pixel(pt1, mod, w);
	pt2 = pt0;
	while (incr < 1)
	{
		put_pixel(pt2, w);
		pt2.x = (int)(pt0.x * (1 - incr) + pt1.x * incr);
		pt2.y = (int)(pt0.y * (1 - incr) + pt1.y * incr);
		incr += 0.0001;
	}
	return (1);
}
