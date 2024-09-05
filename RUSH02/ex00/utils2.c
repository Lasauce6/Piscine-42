/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 12:26:28 by rbaticle          #+#    #+#             */
/*   Updated: 2024/09/01 15:25:45 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	ft_char_is_printable(char c)
{
	if (c < 32 || c > 126)
		return (0);
	return (1);
}

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
