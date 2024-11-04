/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:10:33 by rsebasti          #+#    #+#             */
/*   Updated: 2024/08/08 19:35:57 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_all_strlen(char **strs, char *sep, int size)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size && strs[i])
	{
		len += ft_strlen(strs[i]);
		if (strs[i + 1])
			len += ft_strlen(sep);
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*joined;
	int		i;
	int		j;
	int		k;

	joined = malloc(sizeof(char) * ft_all_strlen(strs, sep, size) + 1);
	if (!joined)
		return (NULL);
	i = -1;
	k = 0;
	joined[0] = '\0';
	if (size == 0)
		return (joined);
	while (++i < size && strs[i])
	{
		j = 0;
		while (strs[i][j])
			joined[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			joined[k++] = sep[j++];
	}
	joined[k] = '\0';
	return (joined);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	printf("./ex03/output___said___this___is___a___success :\n");
	printf("%s\n",  ft_strjoin(3, &argv[1], "___"));
	free(ft_strjoin(2, argv, "___"));
	return (argc);
}
*/