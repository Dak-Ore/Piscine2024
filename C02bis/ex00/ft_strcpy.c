/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:46:03 by rsebasti          #+#    #+#             */
/*   Updated: 2024/07/22 15:50:27 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[16] = "000000000";
	char	dest2[16] = "000000000";
	char	*src;

	src = "Je s";
	ft_strcpy(dest, src);
	printf("%s", dest);
	strcpy(dest2, src);
	printf("%s", dest2);
}
*/