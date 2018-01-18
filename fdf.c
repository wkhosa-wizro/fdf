/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 23:19:42 by wkhosa            #+#    #+#             */
/*   Updated: 2018/01/18 17:27:25 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/fdf.h"

static	void	allocate_and_check_mem(t_mlxwin **w, t_model **m)
{
	*w = (t_mlxwin *)malloc(sizeof(t_mlxwin));
	*m = (t_model *)malloc(sizeof(t_model));
	if (*m == NULL || *w == NULL)
	{
		perror("Failed to initialse data");
		exit(-1);
	}
}

int				main(int argc, char **argv)
{
	t_mlxwin	*w;
	t_model		*mod;
	t_orient	ang;
	t_point		scale;

	if (argc == 2)
	{
		allocate_and_check_mem(&w, &mod);
		scale = let_scale_be(0.5, 0.3, 0.02);
		ang = let_angles_be(-M_PI / 3, -M_PI / 6, 0);
		get_data(argv[1], mod);
		make_object(mod, ang, scale);
		w = create_mlx_window(WIDTH, HEIGHT, "</WeThinkCode");
		w->data = (void *)mod;
		draw_wire_frame(mod, w);
		mlx_put_image_to_window(w->mlx, w->win, w->img, 50, 50);
		mlx_expose_hook(w->win, expose_hook, (void *)w);
		mlx_key_hook(w->win, key_hook, (void *)w);
		mlx_loop(w->mlx);
	}
	else
		ft_putstr("\n\tWrong Number of Arguments... usage ./fdf file.fdf\n\n");
	return (1);
}
