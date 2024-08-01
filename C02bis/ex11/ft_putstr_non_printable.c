/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:17:16 by rsebasti          #+#    #+#             */
/*   Updated: 2024/07/22 16:15:56 by rsebasti         ###   ########.fr       */
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
	ft_putchar('\\');
	ft_putchar(hexa[c / 16]);
	ft_putchar(hexa[c % 16]);
}

int	ft_is_printable(char c)
{
	if ((c < 32 || c > 126))
		return (0);
	return (1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (ft_is_printable(*str))
			ft_putchar(*str);
		else
			ft_puthexa(*str);
		str++;
	}
}
/*
int	main(void)
{
	ft_putstr_non_printable("abcdefghijklmnopqrstuvwxyz*()&^#><\"=+@");
	ft_putchar('\n');
	ft_putstr_non_printable("\b \b\b \n\t\f\r\vafiafiaiaioa 45484845");
}
*/