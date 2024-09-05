/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:19:56 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/29 17:08:47 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char *str, char *charset, int pos)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (str[pos] != charset[i])
			return (0);
		i++;
		pos++;
	}
	return (i);
}

int	get_words(char *str, char *charset)
{
	int	i;
	int	j;
	int	count;
	int	b_charset;

	i = -1;
	j = 0;
	count = 0;
	while (str[++i])
	{
		b_charset = is_charset(str, charset, i);
		if (b_charset)
		{
			i += b_charset - 1;
			j++;
		}
		else if (!b_charset && j != 0)
		{
			count++;
			j = 0;
		}
	}
	count++;
	return (count);
}

int	word_length(char *str, char *charset, int pos)
{
	int	i;

	i = 0;
	while (str[pos] && !is_charset(str, charset, pos))
	{
		i++;
		pos++;
	}
	return (i);
}

int	fill_tab(char *str, char *charset, char ***res)
{
	int	t;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (!is_charset(str, charset, i))
		{
			(*res)[j] = malloc(sizeof(char)
					* (word_length(str, charset, i) + 1));
			if (!(*res)[j])
				return (0);
			t = 0;
			while (!is_charset(str, charset, i) && str[i])
				(*res)[j][t++] = str[i++];
			(*res)[j][i] = '\0';
			j++;
		}
		else
			i += is_charset(str, charset, i);
	}
	(*res)[j] = 0;
	return (1);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		nb_words;

	nb_words = get_words(str, charset);
	res = malloc(sizeof(char *) * (nb_words + 1));
	if (!res)
		return (0);
	if (!fill_tab(str, charset, &res))
		return (0);
	return (res);
}
