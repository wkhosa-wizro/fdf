/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/07 00:00:13 by wkhosa            #+#    #+#             */
/*   Updated: 2018/01/12 21:16:10 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_geometry.h"

static	t_point	rot_about_x(t_point pt0, double angle)
{
	t_point	pt1;

	if (fmod(angle, (2 * M_PI)) == 0)
		return (pt0);
	pt1.y = pt0.y * cos(angle) - pt0.z * sin(angle);
	pt1.z = pt0.y * sin(angle) + pt0.z * cos(angle);
	pt1.x = pt0.x;
	return (pt1);
}

static	t_point	rot_about_y(t_point pt0, double angle)
{
	t_point	pt1;

	if (fmod(angle, (2 * M_PI)) == 0)
		return (pt0);
	pt1.x = pt0.x * cos(angle) + pt0.z * sin(angle);
	pt1.z = -(pt0.x) * sin(angle) + pt0.z * cos(angle);
	pt1.y = pt0.y;
	return (pt1);
}

static	t_point	rot_about_z(t_point pt0, double angle)
{
	t_point	pt1;

	if (fmod(angle, (2 * M_PI)) == 0)
		return (pt0);
	pt1.x = pt0.x * cos(angle) - pt0.y * sin(angle);
	pt1.y = pt0.x * sin(angle) + pt0.y * cos(angle);
	pt1.z = pt0.z;
	return (pt1);
}

t_point			rotate(t_point pt0, t_orient angle)
{
	t_point	pt1;

	pt1 = rot_about_x(pt0, angle.alpha);
	pt1 = rot_about_y(pt1, angle.beta);
	pt1 = rot_about_z(pt1, angle.gamma);
	return (pt1);
}
