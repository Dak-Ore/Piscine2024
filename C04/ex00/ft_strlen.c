/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 09:29:27 by rsebasti          #+#    #+#             */
/*   Updated: 2024/07/24 18:34:16 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	char	*st;

	st = str;
	while (*st)
		st++;
	return ((long)st - (long)str);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_strlen("Mega test"));
}
*/ 