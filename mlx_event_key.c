/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_event_key.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 19:25:22 by wkhosa            #+#    #+#             */
/*   Updated: 2018/01/18 17:05:13 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx_event.h"
#include "include/fdf.h"

int		key_hook(int keycode, void *win)
{
	t_mlxwin	*temp;
	t_model		*mod;

	temp = (t_mlxwin *)win;
	mod = (t_model *)(temp->data);
	if (keycode == EXIT_WIN)
	{
		mlx_destroy_window(temp->mlx, temp->win);
		exit(1);
	}
	return (1);
}
