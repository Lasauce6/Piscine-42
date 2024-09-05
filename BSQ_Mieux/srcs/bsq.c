/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:19:29 by rbaticle          #+#    #+#             */
/*   Updated: 2024/09/04 19:45:37 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

void	free_map(t_map *map, int j)
{
	while (--j >= 0)
		free(map->map[j]);
	free(map->map);
	map->map = 0;
}

void	fill_map(char *str_map, t_map *map)
{
	int		i;
	int		j;

	map->map = malloc(sizeof(char *) * (map->nb_lines + 1));
	if (!map->map)
	{
		free_map(map, 0);
		return ;
	}
	map->nb_cols = get_line_size(str_map);
	i = 0;
	j = 0;
	while (j < map->nb_lines)
	{
		map->map[j] = ft_strndup(&str_map[i], map->nb_cols);
		if (!map->map[j])
		{
			free_map(map, j);
			return ;
		}
		i += map->nb_cols + 1;
		j++;
	}
	map->map[j] = 0;
}

void	get_map(char *file_str, t_map *map)
{
	int		size;

	size = get_first_line_size(file_str);
	map->nb_lines = ft_atoi(file_str);
	map->empty = file_str[size - 3];
	map->obstacle = file_str[size - 2];
	map->full = file_str[size - 1];
	fill_map(&file_str[get_first_line_size(file_str) + 1], map);
}

void	print_map(t_map map)
{
	int	i;

	i = -1;
	while (map.map[++i])
	{
		write(1, map.map[i], ft_strlen(map.map[i]));
		write(1, "\n", 1);
	}
}

int	bsq(char *file_str)
{
	t_map		map;
	t_square	square;
	int			i;

	get_map(file_str, &map);
	if (!map.map)
		return (0);
	square = biggest_square(map);
	if (square.tilted)
		put_tilted_square(&map, square);
	else
		put_square(&map, square);
	print_map(map);
	i = -1;
	while (map.map[++i])
		free(map.map[i]);
	free(map.map);
	return (1);
}
