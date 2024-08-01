/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 16:15:21 by rsebasti          #+#    #+#             */
/*   Updated: 2024/07/29 14:26:05 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print_params(char **tab, int c)
{
	int	i;

	i = 1;
	while (i < c)
	{
		ft_putstr(tab[i]);
		i++;
	}
}

int	main(int c, char **v)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < c)
	{
		j = 0;
		while (j < c)
		{
			if (ft_strcmp(v[j], v[i]) > 0)
			{
				temp = v[j];
				v[j] = v[i];
				v[i] = temp;
			}
			j++;
		}
		i++;
	}
	ft_print_params(v, c);
	return (0);
}
