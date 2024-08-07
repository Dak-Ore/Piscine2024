/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:58:13 by rsebasti          #+#    #+#             */
/*   Updated: 2024/08/07 15:04:27 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "square.h"
#include "map.h"

int	obs_in_range(t_point a, int s_size, t_point *obs, t_map map)
{
	int	i;

	i = 0;
	if (a.x + s_size > map.dim_x || a.y + s_size > map.dim_y)
		return (1);
	while (obs[i].x)
	{
		if ((obs[i].x < a.x && obs[i].x > a.x + s_size)
			|| (obs[i].x > a.x && obs[i].x < a.x + s_size)
			|| (obs[i].y < a.y && obs[i].y > a.y + + s_size)
			|| (obs[i].y > a.y && obs[i].y < a.y + + s_size))
			return (1);
		i++;
	}
	return (0);
}

t_square	*new_square(t_point start, int size)
{
	t_square *new_square;

	new_square = malloc(sizeof(t_square));
	new_square->x = start.x;
	new_square->y = start.y;
	new_square->size = size;
	return (new_square);
}

int	create_square(t_point start)
{
	
}
