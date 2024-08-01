/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 19:13:56 by rsebasti          #+#    #+#             */
/*   Updated: 2024/07/31 04:59:35 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*tab;
	long	range;
	long	i;

	if (min >= max)
		return (0);
	range = max - min;
	i = 0;
	tab = malloc(sizeof(int) * range);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
/* 
#include <stdio.h>
int	main(void)
{
	int		min = -365;
	int		max = 207;
	int 	*tab = ft_range(min, max);
	long	i = 0;
	long	size = max - min;
	
	while (i < size)
	{
		printf("%d \n", tab[i]);
		i++;
	}
}
 */