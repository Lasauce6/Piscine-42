/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_cases.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:59:30 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/24 16:42:57 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_col_up(int *map, int tab[4][4], int pos)
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (pos / 4 == 3)
	{
		while (i < 4)
		{
			if (tab[i][pos % 4] > max)
			{
				max = tab[i][pos % 4];
				count++;
			}
			i++;
		}
		if (map[pos % 4] != count)
			return (1);
	}
	return (0);
}

int	check_col_down(int *map, int tab[4][4], int pos)
{
	int	i;
	int	max;
	int	count;

	i = 3;
	max = 0;
	count = 0;
	if (pos / 4 == 3)
	{
		while (i >= 0)
		{
			if (tab[i][pos % 4] > max)
			{
				max = tab[i][pos % 4];
				count++;
			}
			i--;
		}
		if (map[4 + pos % 4] != count)
			return (1);
	}
	return (0);
}

int	check_row_right(int *map, int tab[4][4], int pos)
{
	int	i;
	int	max;
	int	count;

	i = 3;
	max = 0;
	count = 0;
	if (pos % 4 == 3)
	{
		while (i >= 0)
		{
			if (tab[pos / 4][i] > max)
			{
				max = tab[pos / 4][i];
				count++;
			}
			i--;
		}
		if (map[12 + pos / 4] != count)
			return (1);
	}
	return (0);
}

int	check_row_left(int *map, int tab[4][4], int pos)
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (pos % 4 == 3)
	{
		while (i < 4)
		{
			if (tab[pos / 4][i] > max)
			{
				max = tab[pos / 4][i];
				count++;
			}
			i++;
		}
		if (map[8 + pos / 4] != count)
			return (1);
	}
	return (0);
}

int	check_cases(int *map, int tab[4][4], int pos)
{
	if (check_row_left(map, tab, pos))
		return (1);
	if (check_row_right(map, tab, pos))
		return (1);
	if (check_col_down(map, tab, pos))
		return (1);
	if (check_col_up(map, tab, pos))
		return (1);
	return (0);
}
