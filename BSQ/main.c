/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:38:17 by rsebasti          #+#    #+#             */
/*   Updated: 2024/08/05 23:39:24 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "utils/read_file.h"
#include "map.h"

int	print_message(char *message, int type)
{
	if (type == 0)
		write(2, "\e[0;32m", 8);
	if (type == 2)
		write(2, "\e[0;33mWarning : ", 18);
	if (type == 1)
		write(2, "\e[0;31mERROR : ", 16);
	while (*message)
		write(2, message++, 1);
	write(2, "\n", 1);
	return(1); // LA ICI OUOU
}

char	*read_input(void)
{
	char	*buffer;
	//int		size;
	char	*true_buffer;
	int		fd;

	buffer = malloc(sizeof(char) * 20);
	print_message("Veuillez entrez un fichier map a resoudre:", 0);
	read(0, buffer, sizeof(buffer));
	free(buffer);
	return (true_buffer);
}

int	main(int argc, char **argv)
{
	//char	**map;
	char	*user;
	char	*file_content;
	t_map	map;

	if (argc == 1)
	{
		print_message("No argument", 2);
		user = read_input();
	}
	while (argc > 1 || *user)
	{
		file_content = read_file(*argv);
		if (file_content == NULL)
		{
			print_message("Can't read file", 1);
			continue ;
		}
		parse_map(file_content, &map);
		free(file_content);
/* 		resolve_map();
		print_map(); */
		argc--;
		argv++;
		user = NULL;
	}
}

