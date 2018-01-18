/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdeldblptr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 15:52:24 by wkhosa            #+#    #+#             */
/*   Updated: 2018/01/18 15:52:27 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/fdf.h"

void	ft_memdeldblptr(char **ap)
{
	int	index;

	if (ap == NULL)
		return ;
	index = 0;
	while (ap[index] != '\0')
	{
		free(ap[index++]);
	}
	free(ap);
	ap = NULL;
}
