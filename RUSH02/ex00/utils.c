/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:25:57 by rbaticle          #+#    #+#             */
/*   Updated: 2024/09/01 11:55:58 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	is_input_valid(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (str[i])
		return (0);
	return (1);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return i;
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i] && i < n)
		i++;
	return (s1[i] - s2[i]);
}

char	*ft_rev_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	strlen;

	i = 0;
	strlen = ft_strlen(str) - 1;
	j = ft_strlen(to_find) - 1;
	if (j <= 0)
		return (NULL);
	while (strlen > 0)
	{
		if (str[strlen] == to_find[j])
		{
			if (ft_strncmp(&str[strlen - j], to_find, j) == 0
				&& (str[strlen + 1] == ' ' || str[strlen + 1] == ':'))
				return (&str[strlen - j]);
		}
		strlen--;
	}
	return (NULL);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}
