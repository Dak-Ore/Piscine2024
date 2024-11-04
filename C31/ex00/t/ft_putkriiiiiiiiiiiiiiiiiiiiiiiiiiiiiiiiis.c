/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putkriiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiis.        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 22:33:24 by rsebasti          #+#    #+#             */
/*   Updated: 2024/08/08 11:51:29 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int	get_file_size(char *file)
{
	int		count;
	int		opener;
	char	buffer[1];

	count = 0;
	opener = open(file, O_RDONLY);
	if (opener == -1)
		return (0);
	while (read(opener, buffer, sizeof(buffer)))
		count++;
	return (count);
}

char	*get_file(char *file)
{
	char	*res;
	int		opener;
	int		buffersize;
	int		closer;

	opener = open(file, O_RDONLY);
	if (opener == -1)
		return (NULL);
	res = malloc(sizeof(char) * get_file_size(file) + 1);
	buffersize = read(opener, res, get_file_size(file));
	res[buffersize] = '\0';
	if (buffersize == -1)
	{
		close(opener);
		return (NULL);
	}
	closer = close(opener);
	if (closer == -1)
		return (NULL);
	return (res);
}

void	ft_putfile(char *file)
{
	char	*display;

	system("clear");
	display = get_file(file);
	while (*display)
		write(1, display++, 1);
	sleep(1);
}

int	main(void)
{
	system("resize -s 47 101");
	ft_putfile("src/mouette.txt");
	ft_putfile("src/mouette2.txt");
	ft_putfile("src/mouette3.txt");
	ft_putfile("src/kristext.txt");
	system("cvlc --play-and-exit src/kriiiiis.mp3");
	ft_putfile("src/kris.txt");
}
