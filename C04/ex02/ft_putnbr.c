/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:14:26 by rsebasti          #+#    #+#             */
/*   Updated: 2024/07/23 22:50:17 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	res;
	char	print;

	res = nb;
	if (res < 0)
	{
		write(1, "-", 1);
		res = -res;
	}
	if (res > 9)
		ft_putnbr(res / 10);
	print = res % 10 + 48;
	write(1, &print, 1);
}
/*
int	main(void)
{
	ft_putnbr(-425656);
}
*/