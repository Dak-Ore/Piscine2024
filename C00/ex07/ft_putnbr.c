/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 09:53:30 by rsebasti          #+#    #+#             */
/*   Updated: 2024/07/17 19:19:37 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	res;

	res = nb;
	if (res < 0)
	{
		ft_putchar('-');
		res = -res;
	}
	if (res > 9)
		ft_putnbr(res / 10);
	ft_putchar(res % 10 + 48);
}
