/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchaffal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:57:12 by lchaffal          #+#    #+#             */
/*   Updated: 2024/09/03 16:08:32 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

// Meilleur ami de check_first_line (trop de lignes pour la norme)
int	check_first_line_friend(char *str, char *l1, char *l2, int i)
{
	if (str[i] != '\n')
		return (0);
	*l1 = str[i - 3];
	*l2 = str[i - 2];
	return (i + 1);
}

//checks if first line is correct and put empty/obstacle in l1/l2
int	check_first_line(char *str, char *l1, char *l2)
{
	int	i;
	int	j;
	int	t;

	i = 0;
	if (ft_atoi(str) <= 0)
		return (0);
	while ('0' <= str[i] && str[i] <= '9' && str[i + 3] != '\n')
		i++;
	j = 0;
	while (j < 3)
	{
		t = 1;
		while (str[i + t] != '\n')
		{
			if (str[i] == str[i + t])
				return (0);
			t++;
		}
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
		j++;
	}
	return (check_first_line_friend(str, l1, l2, i));
}

//checks if the current line is made only of l1/l2
int	check_line(char *str, int i, char l1, char l2)
{
	int	c;

	c = 0;
	while (str[i] == l1 || str[i] == l2)
	{
		i++;
		c++;
	}
	if (str[i] == '\n' || str[i] == 0)
		return (c + 1);
	else
		return (0);
}

//checks if the map is correct
int	check_map(char	*str)
{
	int		line;
	int		size;
	int		i;
	char	l1;
	char	l2;

	i = check_first_line(str, &l1, &l2);
	if (!i)
		return (0);
	size = check_line(str, i, l1, l2);
	i += size;
	line = 1;
	while (line < ft_atoi(str) && str[i])
	{
		if (size != check_line(str, i, l1, l2))
			return (0);
		line++;
		i += size;
	}
	if (line != ft_atoi(str) || str[i] != 0
		|| line < 1 || size < 2)
		return (0);
	return (1);
}
