/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_event.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 19:27:27 by wkhosa            #+#    #+#             */
/*   Updated: 2018/01/13 01:51:42 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MLX_EVENT_H
# define MLX_EVENT_H

# include "create_mlx_window.h"
# include "libft/libft.h"

# define EXIT_WIN 53
# define ALPHA_ADD 18
# define BETA_ADD 19
# define GAMMA_ADD 20

int	key_hook(int keycode, void *param);
int	expose_hook(void *win);

#endif
