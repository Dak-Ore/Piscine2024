int	ft_atoi(char *str)
{
	long	result;
	int		sign;

	sign = 1;
	result = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		result = result * 10 + (*(str++) - '0');
	return ((int)result * sign);
}
