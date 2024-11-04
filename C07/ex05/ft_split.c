/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:47:30 by rsebasti          #+#    #+#             */
/*   Updated: 2024/08/08 17:55:16 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen_to(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !is_charset(str[i], charset))
		i++;
	return (i);
}

char	*ft_strdup(char *str, char *charset)
{
	char	*new;
	int		i;

	new = malloc(sizeof(char) * ft_strlen_to(str, charset) + 1);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (str[i] && !is_charset(str[i], charset))
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

int	ft_countwords(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (str[i] && !is_charset(str[i], charset))
		count++;
	while (str[i])
	{
		if (is_charset(str[i], charset) && !is_charset(str[i + 1], charset)
			&& str[i + 1])
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**splited;
	int		i;
	int		nb;

	i = 0;
	nb = 0;
	splited = malloc(sizeof(char *) * ft_countwords(str, charset) + 1);
	if (splited == NULL)
		return (NULL);
	while (str[i])
	{
		if (is_charset(str[i], charset) && !is_charset(str[i + 1], charset)
			&& str[i + 1] && splited[nb])
			nb++;
		if (!is_charset(str[i], charset))
		{
			splited[nb] = ft_strdup(&str[i], charset);
			while (str[i + 1] && !is_charset(str[i + 1], charset))
				i++;
		}
		i++;
	}
	splited[nb + 1] = 0;
	return (splited);
}
/*
#include <stdio.h>
int	main(void)
{
 	char	**split;

	split = ft_split(" ururiruro p ", " p");
	while (*split)
	{
		printf("%s \n", *split);
		split++;
	}
}
*/
