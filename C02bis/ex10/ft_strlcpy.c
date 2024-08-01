/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 11:18:42 by rsebasti          #+#    #+#             */
/*   Updated: 2024/07/22 16:11:00 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srcsize;

	i = 0;
	srcsize = ft_strlen(src);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
		dest[i++] = '\0';
	if (size < srcsize)
		dest[i] = '\0';
	return (srcsize);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[16] = "Vraiment";
	char	dest2[16] = "Vraiment";
	char	*src;

	src = "Je surrrrrrrrrr";
	ft_strlcpy(dest, src, 5);
	printf("%s \n", dest);
	strlcpy(dest2, src, 5);
	printf("%s \n", dest2);
}
*/