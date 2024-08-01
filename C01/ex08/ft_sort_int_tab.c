/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:48:46 by rsebasti          #+#    #+#             */
/*   Updated: 2024/07/18 15:22:26 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[j] > tab[i])
				ft_swap(&tab[j], &tab[i]);
			j++;
		}
		i++;
	}
}

/*
int	main(void)
{
	int	tab[10];
	int i;

	i = 0;
	while (i < 10)
	{
		tab[i] = 10 - i;
		i++;
	}

	ft_sort_int_tab(tab, 10);
	i = 0;
	while (i < 10)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (1);
}
*/