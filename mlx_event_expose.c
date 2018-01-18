/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_event_expose.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 19:16:17 by wkhosa            #+#    #+#             */
/*   Updated: 2018/01/12 19:22:50 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx_event.h"

int		expose_hook(void *win)
{
	t_mlxwin	*temp;

	temp = (t_mlxwin *)win;
	mlx_put_image_to_window(temp->mlx, temp->win, temp->img, 50, 50);
	return (1);
}
