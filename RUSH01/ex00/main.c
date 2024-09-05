/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 09:25:02 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/24 18:05:03 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*format_map(char *map);
int	is_map_valid(char *map);
int	solve_tab(int *map, int tab[4][4], int pos);

void	ft_putnbr(int nb)
{
	char		c;
	long long	n;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		c = '0' + n;
		write(1, &c, 1);
	}
}

void	show_tab(int tab[4][4])
{
	int	i;
	int	j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			ft_putnbr(tab[i][j]);
			write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
}

int	main(int argc, char **argv)
{
	int	*map;
	int	tab[4][4];
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
			tab[i][j++] = 0;
		i++;
	}
	if (argc == 2 && is_map_valid(argv[1]))
	{
		map = format_map(argv[1]);
		if (!solve_tab(map, tab, 0))
			write(1, "Error\n", 6);
		else
			show_tab(tab);
		free(map);
	}
	else
		write(1, "Error\n", 6);
}
