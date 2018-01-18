/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_point_to_pixel.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 21:07:38 by wkhosa            #+#    #+#             */
/*   Updated: 2018/01/12 21:14:24 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_POINT_TO_PIXEL_H
# define MAP_POINT_TO_PIXEL_H

# include "ft_geometry.h"
# include "model.h"
# include "create_mlx_window.h"

t_point	map_point_to_pixel(t_point point, t_model *mod, t_mlxwin *win);

#endif
