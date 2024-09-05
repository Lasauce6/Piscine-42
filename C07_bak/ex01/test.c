/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:17:23 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/27 15:29:24 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	main(int argc, char **argv)
{
	int	*tab;
	int	i;

	if (argc > 2)
	{
		tab = ft_range(atoi(argv[1]), atoi(argv[2]));
		i = -1;
		while (++i < atoi(argv[1] - atoi(argv[2])))
			printf("%d ", tab[i]);
		free(tab);
	}
}
