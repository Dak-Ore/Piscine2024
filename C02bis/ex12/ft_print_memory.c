/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 16:17:56 by rsebasti          #+#    #+#             */
/*   Updated: 2024/07/23 09:20:47 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthexa(char c)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	ft_putchar(hexa[c / 16]);
	ft_putchar(hexa[c % 16]);
}

void	ft_putaddr(long res)
{
	char	*hexa;
	int		i;
	char	tab[16];

	i = 0;
	hexa = "0123456789abcdef";
	while (i < 16)
	{
		tab[15 - i] = hexa[res % 16];
		res /= 16;
		i++;
	}
	write(1, tab, 16);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (i < 16 && str[i])
	{
		if (str[i] > 32 || str[i] < 126)
			ft_putchar(str[i]);
		else
			ft_putchar('.');
		i++;
	}
	ft_putchar('\n');
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		i;
	char	*str;

	if (size > 0)
	{
		str = addr;
		ft_putaddr((long) str);
		write(1, ": ", 2);
		i = 0;
		while (i < 16)
		{
			ft_puthexa(str[i++]);
			ft_puthexa(str[i++]);
			ft_putchar(' ');
		}
		ft_putstr_non_printable(str);
		if (size >= 16)
			ft_print_memory(&str[i], size - 16);
	}
	return (addr);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*dest = "Lorem ipsum dolor sit amet, conse.";

	ft_print_memory(dest, 35);
}
*/