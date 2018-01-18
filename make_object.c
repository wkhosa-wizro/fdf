/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_object.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 22:07:07 by wkhosa            #+#    #+#             */
/*   Updated: 2018/01/18 15:59:23 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/fdf.h"

int		make_object(t_model *mod, t_orient angle, t_point scale)
{
	t_point	*obj;
	int		len;
	int		index;
	t_point	pt;

	len = mod->numofcol * mod->numofrow;
	if (!(obj = (t_point *)malloc(sizeof(t_point) * len)))
	{
		perror("Failed to allocate memory");
		exit(-1);
	}
	index = 0;
	while (index < len)
	{
		pt = element_to_point_by_index(mod, index);
		obj[index] = rotate(scale_point(pt, scale), angle);
		index++;
	}
	mod->obj = obj;
	mod->scale = scale;
	mod->angles = angle;
	return (1);
}
