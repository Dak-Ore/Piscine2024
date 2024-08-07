#include "square.h"
#include "map.h"

t_point	*set_point(t_point *point, int x, int y)
{
	point->x = x;
	point->y = y;
	return (point);
}

int	replace_bsq(t_square *old, t_square *new)
{
	free(old);
	old = new;
}

t_square	*find(t_map *map, t_point *obs_array)
{
	t_point a;
	t_square *bsq;
	int	size;

	size = 1;
	bsq = NULL;
	set_point(&a, 0, 0);
	while (a.y < map->dim_y)
	{
		if (obs_in_range(a, size, obs_array) == 0)
			replace_bsq(bsq, new_square(a, size++));
		else
		{
			if (a.x < map->dim_x - 1)
				a.x = a.x + 1;
			else
			{
				a.x = 0;
				a.y = a.y + 1;
			}
		}
	}
	return (bsq);
}
