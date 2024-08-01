/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:52:50 by rsebasti          #+#    #+#             */
/*   Updated: 2024/07/18 12:17:36 by rsebasti         ###   ########.fr       */
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

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i <= size / 2 - 1)
	{
		ft_swap(&tab[i], &tab[size - i - 1]);
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
		tab[i] = i;
		i++;
	}

	ft_rev_int_tab(tab, 10);
	i = 0;
	while (i < 10)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (1);
}
*/
