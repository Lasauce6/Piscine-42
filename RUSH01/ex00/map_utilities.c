/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_utilities.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 10:44:47 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/24 17:12:04 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	sign;

	i = 0;
	n = 0;
	sign = 1;
	if (str != 0x0)
	{
		while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
			i++;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				sign = -sign;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			n = (n * 10) + (str[i] - 48);
			i++;
		}
	}
	return (n * sign);
}

int	*format_map(char *map)
{
	int	i;
	int	j;
	int	*new_map;

	new_map = malloc(sizeof(int) * 16);
	i = 0;
	j = 0;
	while (map[i])
	{
		if (i % 2 == 0 && j <= 16)
			new_map[j++] = ft_atoi(&map[i]);
		i++;
	}
	return (new_map);
}

int	is_map_valid(char *map)
{
	int	i;

	i = 0;
	while (map[i])
	{
		if (i % 2 != 0 && map[i] != ' ')
			return (0);
		if (i % 2 == 0 && !(map[i] >= '1' && map[i] <= '4'))
			return (0);
		i++;
	}
	if (i != 31)
		return (0);
	return (1);
}
