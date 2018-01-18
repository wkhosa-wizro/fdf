/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 16:19:14 by wkhosa            #+#    #+#             */
/*   Updated: 2018/01/18 16:22:22 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <math.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include "../ft_geometry.h"
# include "../create_mlx_window.h"
# include "../mlx_event.h"
# include "../libft/libft.h"
# include "../draw_line.h"
# include "../map_point_to_pixel.h"

# define BITS_PER_PIXEL 32

void				print_matrix(t_model *matrix);
void				print_point(t_point point);

t_point				get_point(t_model *mod, int col, int row);
t_point				get_point_by_index(t_model *mod, int index);

t_point				element_to_point(t_model *mod, int col, int row);
t_point				element_to_point_by_index(t_model *mod, int index);

int					make_object(t_model *mod, t_orient angle, t_point scale);

t_point				rotate(t_point pt_0, t_orient angle);

void				ft_memdeldblptr(char **ap);

int					get_data(char *path, t_model *mod);
void				draw_wire_frame(t_model *mod, t_mlxwin *win);

#endif
