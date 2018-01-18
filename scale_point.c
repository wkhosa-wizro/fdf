/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scale_point.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 21:18:04 by wkhosa            #+#    #+#             */
/*   Updated: 2018/01/12 21:18:59 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_geometry.h"

t_point		scale_point(t_point pt0, t_point scale)
{
	t_point	pt1;

	pt1.x = pt0.x * scale.x;
	pt1.y = pt0.y * scale.y;
	pt1.z = pt0.z * scale.z;
	return (pt1);
}
