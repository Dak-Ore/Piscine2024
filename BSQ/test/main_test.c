#include <stdio.h>
#include "../utils/read_file.h"
#include "../map.h"
int	main(int argc, char **argv)
{
	char *file_content;
	t_map map;

	file_content = read_file("testmap");
	parse_map(file_content, &map);

	for (int i = 0; i < map.dim_y; i++)
	{
		printf("%s\n",map.data[i]);
	}
}