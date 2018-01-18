/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 21:13:06 by wkhosa            #+#    #+#             */
/*   Updated: 2018/01/18 16:08:12 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DRAW_LINE_H
# define DRAW_LINE_H

# include "mlx.h"
# include "create_mlx_window.h"
# include "ft_geometry.h"
# include "map_point_to_pixel.h"

int			put_pixel(t_point pixel, t_mlxwin *p);
int			draw_line(t_point pt0, t_point pt1, t_model *mod, t_mlxwin *p);

#endif
