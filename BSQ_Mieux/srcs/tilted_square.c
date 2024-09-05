/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tilted_square.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchaffal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:34:01 by lchaffal          #+#    #+#             */
/*   Updated: 2024/09/03 17:53:39 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int	try_tilted_square(t_square sq, t_map map)
{
	int	x;
	int	y;
	int	i;

	if (sq.y - (sq.size - 1) < 0 || sq.y + (sq.size - 1) > map.nb_cols
		|| sq.x + sq.size * 2 - 1 > map.nb_lines)
		return (0);
	x = sq.x;
	i = 0;
	while (x - sq.x < sq.size * 2)
	{
		y = sq.y - i;
		while (y < sq.y + i + 1)
		{
			if (map.map[x][y] == map.obstacle)
				return (0);
			y++;
		}
		if (x >= sq.x + sq.size - 1)
			i--;
		else
			i++;
		x++;
	}
	return (1);
}

void	put_tilted_square(t_map *map, t_square square)
{
	int	x;
	int	y;
	int	i;
	int	j;

	x = square.x;
	i = 0;
	j = 0;
	while (j < square.size * 2)
	{
		y = square.y - i;
		while (y < square.y + i + 1)
		{
			map->map[x][y] = map->full;
			y++;
		}
		if (x >= square.x + square.size - 1)
			i--;
		else
			i++;
		x++;
		j++;
	}
}
