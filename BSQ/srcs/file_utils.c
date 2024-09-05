/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 18:13:08 by rbaticle          #+#    #+#             */
/*   Updated: 2024/09/04 14:57:42 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int	get_first_line_size(char *file_str)
{
	int	i;

	i = 0;
	while (file_str[i] != '\n')
		i++;
	return (i);
}

char	*get_file(char *filename)
{
	int		fd;
	int		i;
	char	c[1];
	char	*file;

	fd = open(filename, O_RDONLY);
	i = 0;
	while (read(fd, c, 1))
		i++;
	close(fd);
	fd = open(filename, O_RDONLY);
	file = malloc(i + 1);
	if (fd == -1 || !file)
		return (0);
	read(fd, file, i);
	file[i] = '\0';
	return (file);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
