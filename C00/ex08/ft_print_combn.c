/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:11:42 by rsebasti          #+#    #+#             */
/*   Updated: 2024/07/18 09:36:56 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(char *nb, int current, int size)
{
	while (nb[current] <= '9')
	{
		if (current == size)
		{
			write(1, nb, size + 1);


		}
		nb[current]++;
		ft_print_comb(nb, current, current);
	}
	if (current == 0)
	{
		if (nb[current] < '9' - (size - current))
			nb[current]++;
		nb[size] = nb[size - 1] + 1;
		ft_print_comb(nb, size, size);
	}
	else if (nb[current] < '9' - (size - current))
		ft_print_comb(nb, current - 1, size);
}

void	ft_print_combn(int n)
{
	char	tab[9];
	int		i;

	i = 0;
	while (i < n)
	{
		tab[i] = i + 48;
		i++;
	}
	while (i < 9)
	{
		tab[i] = '\0';
		write(1, &tab[i], 1);
		i++;
	}
	ft_print_comb(tab, n - 1, n - 1);
}
