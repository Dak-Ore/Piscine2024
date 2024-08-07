#include <stdlib.h>
#include "ft_strings.h"

void	ft_free_split(char **split_array)
{
	int	i;

	i = 0;
	while (split_array[i])
		free(split_array[i++]);
	free(split_array);
}

char	**ft_split_malloc(char *str, char separator)
{
	int		i;
	int		wc;
	char	**split_array;

	i = 0;
	wc = 0;
	while (str[i])
	{
		while (str[i] && str[i] == separator)
			i++;
		if (str[i])
			wc++;
		while (str[i] && str[i] != separator)
			i++;
	}
	split_array = malloc(sizeof(char *) * (wc + 1));
	return (split_array);
}

char	**ft_split(char *str, char separator)
{
	int		i;
	int		j;
	int		start;
	char	**out;

	out = ft_split_malloc(str, separator);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && str[i] == separator)
			i++;
		start = i;
		while (str[i] && str[i] != separator)
			i++;
		if (i > start)
		{
			out[j] = malloc(sizeof(char) * ((i - start) + 1));
			ft_strncpy(out[j++], &str[start], i - start);
		}
	}
	out[j] = NULL;
	return (out);
}
