/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:51:55 by rsebasti          #+#    #+#             */
/*   Updated: 2024/08/05 14:54:39 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUARE_H
# define SQUARE_H
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include "map.h"

typedef struct s_square
{
	int	x;
	int	y;
	int	size;
}	t_square;

int			obs_in_range(t_point a, int s_size, t_point *obs);
t_square	*new_square(t_point start, int size);

#endif
