/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:17:23 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/23 12:27:36 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(int argc, char **argv)
{
	int	a;
	int	i;
	int	*tab;
	int	**range;

	range = &tab;
	if (argc > 2)
	{
		a = ft_ultimate_range(range, atoi(argv[1]), atoi(argv[2]));
		i = 0;
		while (i < a)
			printf("%d ", tab[i++]);
		printf("\n%d\n", a);
		free(tab);
	}
}
