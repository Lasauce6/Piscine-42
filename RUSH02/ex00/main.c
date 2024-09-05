/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:29:24 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/31 17:05:48 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	ft_print_number(char *str)
{
	write(1, &str[0], 1);
	return (0);
}


int	ft_write_dict(char *key, char *str)
{
	int	fd;
	int	i;

	fd = open("numbers.dict", O_WRONLY | O_APPEND);
	if (fd == -1)
		return (0);
	i = -1;
	while (key[++i])
		write(fd, &key[i], 1);
	write(fd, " : ", 3);
	i = -1;
	while (str[++i])
		write(fd, &str[i], 1);
	write(fd, "\n", 1);
	close(fd);
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc > 3 || argc == 1)
		write(1, "Error\n", 6);
	else
	{
		if (argc == 2)
		{
			if (is_input_valid(argv[1]))
			{
				if (!ft_print_number(argv[1]))
					write(1, "Dict Error\n", 11);
			}
			else
				write(1, "Error\n", 6);
		}
		else if (argc == 3)
		{
			if (is_input_valid(argv[1]) && ft_str_is_printable(argv[2])
				&& ft_write_dict(argv[1], argv[2]))
				return (0);
			else
				write(1, "Error\n", 6);
		}
	}
	return (0);
}
