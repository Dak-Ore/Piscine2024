/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 09:44:43 by rsebasti          #+#    #+#             */
/*   Updated: 2024/07/17 19:19:43 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numb(int n)
{
	int	left;
	int	right;

	left = n / 10 + 48;
	right = n % 10 + 48;
	write(1, &left, 1);
	write(1, &right, 1);
}

void	ft_print_comb2(void)
{
	int	nleft;
	int	nright;

	nleft = 0;
	while (nleft < 99)
	{
		nright = nleft + 1;
		while (nright < 100)
		{
			print_numb(nleft);
			write(1, " ", 1);
			print_numb(nright);
			if (nleft != 98)
				write(1, ", ", 2);
			nright++;
		}
		nleft++;
	}
}
