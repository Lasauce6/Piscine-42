/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:19:56 by rbaticle          #+#    #+#             */
/*   Updated: 2024/09/01 16:10:19 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	in_str(char *str, char c)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] == c)
			return (1);
	}
	return (0);
}

int	get_words(char *str, char *charset)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i])
	{
		while (in_str(charset, str[i]))
			i++;
		if (!in_str(charset, str[i]))
		{
			c++;
			while (!in_str(charset, str[i]) && str[i])
				i++;
		}
	}
	return (c);
}

int	len_word_charset(char *str, char *charset, int pos)
{
	int	i;

	i = 0;
	if (in_str(charset, str[pos]))
	{
		while (in_str(charset, str[pos++]))
			i++;
	}
	else
	{
		while (!in_str(charset, str[pos]) && str[pos++])
			i++;
	}
	return (i);
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

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		i;
	int		j;

	res = malloc(sizeof(char *) * (get_words(str, charset) + 1));
	if (!res)
		return (0);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (in_str(charset, str[i]))
			i += len_word_charset(str, charset, i);
		else
		{
			res[j] = ft_strndup(&str[i], len_word_charset(str, charset, i));
			i += len_word_charset(str, charset, i);
			j++;
		}
	}
	res[j] = 0;
	return (res);
}
