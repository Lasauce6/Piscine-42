/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 11:52:20 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/24 18:05:45 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_cases(int *map, int tab[4][4], int size);

int	check_double(int tab[4][4], int pos, int size)
{
	int	i;

	i = -1;
	while (++i < pos / 4)
	{
		if (tab[i][pos % 4] == size)
			return (1);
	}
	i = -1;
	while (++i < pos % 4)
	{
		if (tab[pos / 4][i] == size)
			return (1);
	}
	return (0);
}

int	solve_tab(int *map, int tab[4][4], int pos)
{
	int	size;

	if (pos == 16)
		return (1);
	size = 0;
	while (++size <= 4)
	{
		if (check_double(tab, pos, size) == 0)
		{
			tab[pos / 4][pos % 4] = size;
			if (check_cases(map, tab, pos) == 0)
			{
				if (solve_tab(map, tab, pos + 1))
					return (1);
			}
			else
				tab[pos / 4][pos % 4] = 0;
		}
	}
	return (0);
}
