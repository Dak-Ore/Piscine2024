/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 10:03:45 by rsebasti          #+#    #+#             */
/*   Updated: 2024/07/22 15:57:26 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if ((*str < 32 || *str > 126))
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;

	i = ft_str_is_printable("abcdefghijklmnopqrstuvwxyz*()&^#><\"=+@");
	printf("%d", i);
	i = ft_str_is_printable("\n\t\v\bff");
	printf("%d", i);
}
*/