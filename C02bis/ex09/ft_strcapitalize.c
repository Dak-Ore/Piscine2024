/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 10:36:29 by rsebasti          #+#    #+#             */
/*   Updated: 2024/07/22 16:07:14 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (2);
	if (c >= '0' && c <= '9')
		return (3);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (ft_is(str[i]) == 2 && ft_is(str[i - 1]) == 0)
			str[i] -= 32;
		if (ft_is(str[i]) == 1 && ft_is(str[i - 1]) != 0)
			str[i] += 32;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(s);
	printf("%s", s);
}
*/