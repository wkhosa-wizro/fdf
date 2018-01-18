/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_pixel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 22:27:43 by wkhosa            #+#    #+#             */
/*   Updated: 2018/01/12 22:30:38 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "put_pixel.h"

int		put_pixel(t_point pixel, t_mlxwin *win)
{
	int		index;
	int		*addr;

	if (pixel.x < 0 || pixel.y < 0)
		return (0);
	addr = (int *)win->img_addr;
	index = (win->width) * pixel.y + pixel.x;
	addr[index] = 0x0000FF00 * (pixel.z + 1);
	return (0);
}
