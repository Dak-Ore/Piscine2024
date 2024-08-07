/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:58:13 by rsebasti          #+#    #+#             */
/*   Updated: 2024/08/06 16:39:30 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

int	obs_in_range(t_point a, int s_size, t_point *obs)
{
	int	i;

	i = 0;
	while (obs[i].x)
	{
		if ((obs[i].x < a.x && obs[i].x > a.x + s_size)
			&& (obs[i].y < a.y && obs[i].y > a.y + s_size)
			|| (obs[i].x > a.x && obs[i].x < a.x + s_size)
			&& (obs[i].y > a.y && obs[i].y < a.y + s_size))
			return (i);
		i++;
	}
	return (0);
}
