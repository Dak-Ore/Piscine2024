#ifndef SPLIT_H
# define SPLIT_H
# include <stdlib.h>
# include "ft_strings.h"

char	**ft_split(char *str, char separator);

void	ft_free_split(char **split_array);

#endif