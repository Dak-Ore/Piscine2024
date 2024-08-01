/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 09:27:14 by rsebasti          #+#    #+#             */
/*   Updated: 2024/07/17 19:29:31 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	left;
	int	mid;
	int	right;

	left = 0;
	while (left < 8)
	{
		mid = left + 1;
		while (mid < 9)
		{
			right = mid + 1;
			while (right < 10)
			{
				ft_putchar(left + 48);
				ft_putchar(mid + 48);
				ft_putchar(right + 48);
				if (!(left == 7 && right == 9))
					write(1, ", ", 2);
				right++;
			}
			mid++;
		}
		left++;
	}
}
