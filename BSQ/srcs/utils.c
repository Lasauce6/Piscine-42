/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:22:11 by rbaticle          #+#    #+#             */
/*   Updated: 2024/09/04 14:57:16 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

char	*ft_strndup(char *src, int n)
{
	int		i;
	char	*dst;

	dst = malloc(n + 1);
	if (!dst)
		return (0);
	i = -1;
	while (src[++i] && i < n)
		dst[i] = src[i];
	dst[i] = '\0';
	return (dst);
}

int	ft_atoi(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	if (str)
	{
		while (str[i] >= '0' && str[i] <= '9' && str[i + 3] != '\n')
		{
			n = (n * 10) + (str[i] - 48);
			i++;
		}
	}
	return (n);
}

int	get_line_size(char *str_map)
{
	int	i;

	i = 0;
	while (str_map[i] != '\n')
		i++;
	return (i);
}
