/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   model.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 01:38:19 by wkhosa            #+#    #+#             */
/*   Updated: 2018/01/18 16:19:01 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODEL_H
# define MODEL_H

# include "ft_geometry.h"

typedef	struct	s_model
{
	double		*elem;
	t_point		*obj;
	int			numofcol;
	int			numofrow;
	double		max_x;
	double		min_x;
	double		max_y;
	double		min_y;
	t_point		scale;
	t_orient	angles;

}				t_model;

#endif
