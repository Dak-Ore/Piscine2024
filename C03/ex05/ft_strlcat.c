/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:08:41 by rsebasti          #+#    #+#             */
/*   Updated: 2024/07/24 15:30:13 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	size_dest;

	i = 0;
	j = 0;
	size_dest = ft_strlen(dest);
	i = ft_strlen(dest);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (size_dest + ft_strlen(src));
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char dest[50] = "testq";
	char dest2[50] = "testq";
	
	printf("%d \n", ft_strlcat(dest, "56tttt", 5));
	printf("%s \n", dest);
	printf("%ld \n", strlcat(dest2, "56tttt", 5));
	printf("%s \n", dest2);
}
*/