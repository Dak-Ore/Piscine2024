/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 20:10:12 by rsebasti          #+#    #+#             */
/*   Updated: 2024/07/31 18:30:14 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_sep(char c, char *charset)
{
	while (*charset)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_strlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (!ft_is_sep(str[i], charset) && str[i])
		i++;
	return (i);
}

int	ft_total_size(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (ft_is_sep(str[i], charset) && !ft_is_sep(str[i + 1], charset))
			count++;
		i++;
	}
	return (count + 2);
}

void	ft_assign(char *str, char *charset, char **tab)
{
	int		i;
	int		nb;
	int		j;

	i = -1;
	nb = 0;
	j = 0;
	tab[nb] = malloc(sizeof(char *) * ft_strlen(str, charset) + 1);
	while (str[++i])
	{
		if (ft_is_sep(str[i], charset) && !ft_is_sep(str[i + 1], charset)
			&& str[i + 1] && j != 0)
		{
			tab[nb][j] = '\0';
			nb++;
			j = ft_strlen(&str[i + 1], charset);
			tab[nb] = malloc(sizeof(char) * j + 1);
			j = 0;
		}
		if (!ft_is_sep(str[i], charset))
			tab[nb][j++] = str[i];
	}
	tab[nb + 1] = malloc(sizeof(int));
	tab[nb + 1] = NULL;
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;

	tab = malloc(sizeof(char *) * ft_total_size(str, charset));
	ft_assign(str, charset, tab);
	return (tab);
}
/* 
#include <stdio.h>
int    main(void)
{
    char    **c;
    c = ft_split("aa bb  c c-d ffafaff  faf af afaf af afd", "-");
    int i = 0;
    while (c[i])
    {
        printf("%s\n", c[i]);
        i++;
    }
	printf("%s\n", c[i]);
}
 */