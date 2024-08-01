/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 09:19:49 by rsebasti          #+#    #+#             */
/*   Updated: 2024/07/22 15:52:00 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[16] = "000000000000";
	char	dest2[16] = "000000000000";
	char	*src;

	src = "Je suirqisif";
	ft_strncpy(dest, src, 6);
	printf("%s", dest);
	strncpy(dest2, src, 6);
	printf("%s", dest2);
}
*/