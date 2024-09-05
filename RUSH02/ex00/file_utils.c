/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:25:04 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/31 16:25:45 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	ft_get_file_size()
{
	int i;
	int fd;

	i = 0;
	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
		return -1;

	char *c = malloc(4);
	while (read(fd, c, 1))
		i++;
	close(fd);
	return i;
}

char *ft_get_name(char *str)
{
	int i;
	int j;
	char *t;
	i = 0;
	j = 0;
	t = malloc(5000);
	while (str[i])
	{
		if (str[i] != ':')
			i++;
		else
			break;
	}
	if (str[i] != ':')
		return NULL;
	i++;
	while (str[i])
	{
		if (str[i] == ' ')
			i++;
		else
			break;
	}
	while (str[i])
	{
		if (str[i] != '\n')
			t[j++] = str[i++];
		else
			break;
	}
	return (t);
}
