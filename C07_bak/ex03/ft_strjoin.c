/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:30:54 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/29 12:51:54 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str != 0x0)
	{
		while (str[i] != '\0')
			i++;
	}
	return (i);
}

int	len_strs(int size, char **strs)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (i < size)
	{
		while (strs[i][res])
			res++;
		i++;
	}
	return (res);
}

char	*get_res(char *res, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	pos;

	i = 0;
	pos = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			res[pos++] = strs[i][j++];
		j = 0;
		if (++i != size)
		{
			while (sep[j])
				res[pos++] = sep[j++];
		}
	}
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;

	if (size == 0)
	{
		res = malloc(sizeof(char));
		if (!res)
			return (0);
		res[0] = '\0';
		return (res);
	}
	res = malloc(sizeof(char) * (len_strs(size, strs))
			+ (ft_strlen(sep) * (size - 1)));
	if (!res)
		return (0);
	return (get_res(res, size, strs, sep));
}
