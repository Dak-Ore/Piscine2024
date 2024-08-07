/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsebasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 23:28:21 by rsebasti          #+#    #+#             */
/*   Updated: 2024/08/05 23:28:57 by rsebasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

/*
Toutes les lignes doivent avoir la même longueur.
Il y a au moins une ligne d’au moins une case.
À la fin de chaque ligne, il y a un retour à la ligne.
caractères présent uniquement ceux présenté à la première ligne.
carte  invalide si un caractère manque sur la première ligne, ou si 2 identiques.
◦ En cas de carte invalide, vous afficherez sur la sortie d’erreur : map error suivi
d’un retour à la ligne. Le programme passera ensuite au traitement du plateau
suivant.
*/

int	print_message(char *message, int type);

int	ft_atoi(char *str);

void	kill_map(t_map *map)
{
	unsigned int	i;

	i = 0;
	while (i < map->dim_y)
		free(map->data[i++]);
	free(map->data);
}

int	parse_map(char *map_string, t_map *map)
{
	unsigned int		i;
	char	**split_data;
	int		len;

	split_data = ft_split(map_string, '\n');
	len = ft_strlen(split_data[0]);
	if (len - 3 < 0)
		return (print_message("Map header is invalid.", 1));
	map->empty_char = split_data[0][len - 3];
	map->full_char = split_data[0][len - 2];
	map->square_char = split_data[0][len - 1];
	split_data[0][len - 2] = '\0';
	map->dim_y = ft_atoi(split_data[0]); 	//check lignes suplementaies >> erreur ?
	map->data = malloc(sizeof(char *) * map->dim_y);
	map->dim_x = ft_strlen(split_data[1]); 
	i = 0;
	while (split_data[++i] && i <= map->dim_y)
	{
		if (check_line(split_data[i], *map) == 0)
			return (0);
		map->data[i - 1] = split_data[i];
	}
	free(split_data[0]);
	free(split_data);
	return (1);
}

int	check_line(char *line, t_map map)
{
	unsigned int	i;

	i = 0;
	if ((unsigned int)ft_strlen(line) != map.dim_x)
		return (print_message("Invalid map. Invalid line Size", 1));
	while (line[i])
	{
		if (line[i] != map.empty_char && line[i] != map.full_char)
			return (print_message("Invalid character in map", 2));
		i++;
	}
	return (1);
}
