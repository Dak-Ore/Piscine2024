/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:43:23 by rsebasti          #+#    #+#             */
/*   Updated: 2024/08/08 19:32:35 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_check_posbase(char c, char *base);

int	ft_baselen(char *base)
{
	int	i;
	int	y;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+'
			|| (base[i] >= '\t' && base[i] <= '\r') || base[i] == ' ')
			return (0);
		y = i + 1;
		while (base[y])
		{
			if (base[y] == base[i])
				return (0);
			y++;
		}
		i++;
	}
	return (i);
}

int	ft_get_string_size(int newint, char *base_to)
{
	int	size;
	int	res;

	size = 0;
	res = 1;
	if (newint < 0)
	{
		newint = -newint;
		size++;
	}
	while (res <= newint)
	{
		res = res * ft_baselen(base_to);
		size++;
	}
	return (size);
}

void	ft_putnbr_base(int nbr, char *base, char *tab, int size)
{
	long	res;
	int		baselen;

	baselen = ft_baselen(base);
	res = nbr;
	if (res < 0)
	{
		tab[0] = '-';
		res = -res;
	}
	if (res >= baselen)
		ft_putnbr_base(res / baselen, base, tab, size - 1);
	tab[size - 1] = (base[res % baselen]);
}

int	ft_atoi_base(char *str, char *base)
{
	int		isneg;
	int		res;
	int		baselen;

	isneg = 1;
	res = 0;
	baselen = ft_baselen(base);
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			isneg = -isneg;
		str++;
	}
	while (ft_check_posbase(*str, base) != -1 && *str)
	{
		res = res * baselen + ft_check_posbase(*str, base);
		str++;
	}
	return (isneg * res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*newstr;
	int		newint;
	int		size;

	if (ft_baselen(base_from) <= 1 || ft_baselen(base_to) <= 1 || !nbr[0])
		return (NULL);
	newint = ft_atoi_base(nbr, base_from);
	size = ft_get_string_size(newint, base_to);
	newstr = malloc(sizeof(char) * size + 1);
	if (newint == 0)
	{
		newstr[0] = base_to[0];
		size++;
	}
	ft_putnbr_base(newint, base_to, newstr, size);
	newstr[size] = '\0';
	return (newstr);
}
/* 
#include <stdio.h>
int	main(int argc, char **argv)
{
	printf("p:%s\n", 
	ft_convert_base(argv[argc - 3], argv[argc - 2], argv[argc - 1]));
} 
 */