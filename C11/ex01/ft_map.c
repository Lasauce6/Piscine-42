/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:25:46 by rbaticle          #+#    #+#             */
/*   Updated: 2024/09/05 11:19:49 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f) (int))
{
	int	*res;
	int	i;

	res = malloc(sizeof(int) * length);
	if (!res)
		return (0);
	i = -1;
	while (++i < length)
		res[i] = f(tab[i]);
	return (res);
}
