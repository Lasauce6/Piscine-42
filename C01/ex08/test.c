/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:13:49 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/15 12:25:11 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void	ft_sort_int_tab(int *tab, int size);

void	create_tab(int *tab, int size)
{
	int	i;

	srand(time(NULL));
	i = 0;
	while (i < size)
	{
		tab[i] = rand() % 50;
		i++;
	}
}

void	print_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		if (i != size - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}

int	main(void)
{
	int	test[9];
	int	*tab;
	int	size;

	size = 9;
	tab = test;
	create_tab(tab, size);
	print_tab(tab, size);
	ft_sort_int_tab(tab, size);
	print_tab(tab, size);
	return (0);
}
