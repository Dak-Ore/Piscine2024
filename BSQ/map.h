#ifndef MAP_H
# define MAP_H
# include <stdlib.h>
# include "utils/ft_split.h"
# include "utils/ft_strings.h"

typedef struct s_map
{
	char			empty_char;
	char			full_char;
	char			square_char;
	unsigned int	dim_x;
	unsigned int	dim_y;
	char			**data;
} t_map;

typedef struct s_point
{
	unsigned int	x;
	unsigned int	y;
} t_point;

int	parse_map(char *map_string, t_map *map);
int	check_line(char *line, t_map map);
#endif