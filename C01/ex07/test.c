/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:03:55 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/15 11:54:34 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	create_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		tab[i] = i;
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
	ft_rev_int_tab(tab, size);
	print_tab(tab, size);
	return (0);
}
