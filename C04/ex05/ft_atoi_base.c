/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:43:23 by rsebasti          #+#    #+#             */
/*   Updated: 2024/07/24 11:16:57 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_posbase(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != c && base[i])
		i++;
	if (base[i] != c)
		return (-1);
	return (i);
}

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

int	ft_atoi_base(char *str, char *base)
{
	int		isneg;
	long	res;
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
/*
#include <stdio.h>
int	main(void)
{
	printf("42:%d\n", ft_atoi_base("2a", "0123456789abcdef"));
	printf("-42:%d\n", ft_atoi_base("   --------+-2a", "0123456789abcdef"));
	printf("42:%d\n", ft_atoi_base("   -+-2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+- 2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+-g", "0123456789abcdef"));

}
*/
