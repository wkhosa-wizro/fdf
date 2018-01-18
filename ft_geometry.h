/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_geometry.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 21:01:19 by wkhosa            #+#    #+#             */
/*   Updated: 2018/01/13 01:42:28 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GEOMETRY_H
# define FT_GEOMETRY_H

# include <math.h>

typedef	struct		s_point
{
	double			x;
	double			y;
	double			z;

}					t_point;

typedef	struct		s_orientation
{
	double			alpha;
	double			beta;
	double			gamma;

}					t_orient;

t_point				rotate(t_point pt0, t_orient angle);
t_point				scale_point(t_point point, t_point scale);

t_point				let_point_be(double x, double y, double z);
t_point				let_scale_be(double x, double y, double z);
t_orient			let_angles_be(double alpha, double beta, double gamma);

#endif
