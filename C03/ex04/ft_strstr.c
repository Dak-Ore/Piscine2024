/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:50:14 by rsebasti          #+#    #+#             */
/*   Updated: 2024/07/24 15:27:57 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	t;

	i = 0;
	if (!*to_find)
		return (str);
	while (str[i])
	{
		j = 0;
		t = i;
		while (str[t] == to_find[j] && to_find[j])
		{
			t++;
			j++;
			if (!to_find[j])
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char dest[50] = "abcdefg1234ddd";
	
	printf("%s \n",ft_strstr(dest, ""));
	printf("%s \n",strstr(dest, ""));
}
*/