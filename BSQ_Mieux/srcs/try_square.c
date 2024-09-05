/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try_square.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchaffal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 12:11:08 by lchaffal          #+#    #+#             */
/*   Updated: 2024/09/04 20:14:11 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int	try_square(t_square square, t_map map)
{
	int	x;
	int	y;

	if (square.x + square.size > map.nb_lines
		|| square.y + square.size > map.nb_cols)
		return (0);
	y = 0;
	while (y < square.size)
	{
		x = 0;
		while (x < square.size)
		{
			if (map.map[square.x + x][square.y + y] == map.obstacle)
				return (0);
			x++;
		}
		y++;
	}
	return (1);
}

t_square	big_square(int x, int y, t_map map, int biggest_size)
{
	t_square	square;
	int			size;

	square.x = x;
	square.y = y;
	square.size = biggest_size;
	while (try_square(square, map))
		square.size++;
	size = square.size - 1;
	if ((biggest_size % 2) == 0)
		biggest_size++;
	square.size = biggest_size;
	while (try_tilted_square(square, map))
		square.size += 2;
	if (square.size - 2 <= size)
	{
		square.size = size;
		square.tilted = 0;
	}
	else
	{
		square.size -= 2;
		square.tilted = 1;
	}
	return (square);
}

t_square	biggest_square(t_map map)
{
	int			x;
	int			y;
	t_square	square;
	t_square	biggest_square;

	biggest_square.size = 0;
	x = 0;
	while (x < map.nb_lines)
	{
		y = 0;
		while (y < map.nb_cols)
		{
			if (map.map[x][y] == map.empty)
			{
				square = big_square(x, y, map, biggest_square.size);
				if (square.size > biggest_square.size)
					biggest_square = square;
			}
			y++;
		}
		x++;
	}
	return (biggest_square);
}

void	put_square(t_map *map, t_square square)
{
	int	x;
	int	x2;
	int	y;
	int	y2;

	x = square.x;
	x2 = 0;
	while (x2 < square.size)
	{
		y = square.y;
		y2 = 0;
		while (y2 < square.size)
		{
			map->map[x][y] = map->full;
			y++;
			y2++;
		}
		x++;
		x2++;
	}
}
