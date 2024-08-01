/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:53:04 by rsebasti          #+#    #+#             */
/*   Updated: 2024/07/24 11:10:40 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_baselen(char *base)
{
	int	i;
	int	y;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+'
			|| (base[i] >= '\t' && base[i] <= '\r') || base[i] == ' ')
			return (0);
		y = i + 1;
		while (base[y])
		{
			if (base[y] == base[i])
				return (0);
			y++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	res;
	int		baselen;

	baselen = ft_baselen(base);
	res = nbr;
	if (baselen > 1)
	{
		if (res < 0)
		{
			ft_putchar('-');
			res = -res;
		}
		if (res >= baselen)
			ft_putnbr_base(res / baselen, base);
		ft_putchar(base[res % baselen]);
	}
}
/*
int	main(void)
{
	ft_putnbr_base(200, "poneyvif");
}
*/