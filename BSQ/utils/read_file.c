#include "read_file.h"

char	*read_file(char *file)
{
	char			c;
	char			*result;
	int				fd;
	unsigned int	file_len;

	file_len = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (NULL);
	while (read(fd, &c, 1))
		file_len++;
	close(fd);
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (NULL);
	result = malloc(sizeof(char) * (file_len + 1));
	read(fd, result, file_len);
	result[file_len] = '\0';
	close(fd);
	return (result);
}