/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_mlx_window.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 18:48:32 by wkhosa            #+#    #+#             */
/*   Updated: 2018/01/18 16:03:26 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CREATE_MLX_WINDOW_H
# define CREATE_MLX_WINDOW_H

# include "mlx.h"
# include "libft/libft.h"

# define BITS_PER_PIXEL 32
# define WIDTH 600
# define HEIGHT 600

typedef	struct	s_mlxwin
{
	int			width;
	int			height;
	void		*win;
	void		*mlx;
	void		*img;
	void		*img_addr;
	void		*data;

}				t_mlxwin;

t_mlxwin		*create_mlx_window(int width, int height, char *title);

#endif
