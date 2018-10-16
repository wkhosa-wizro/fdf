/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_geometric_object.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 21:32:37 by wkhosa            #+#    #+#             */
/*   Updated: 2018/01/12 21:53:27 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_geometry.h"

t_point			let_point_be(double x, double y, double z)
{
	t_point		point;

	point.x = x;
	point.y = y;
	point.z = z;
	return (point);
}

t_point			let_scale_be(double x, double y, double z)
{
	t_point		point;

	point = let_point_be(x, y, z);
	return (point);
}

t_orient		let_angles_be(double alpha, double beta, double gamma)
{
	t_orient	angles;

	angles.alpha = alpha;
	angles.beta = beta;
	angles.gamma = gamma;
	return (angles);
}
