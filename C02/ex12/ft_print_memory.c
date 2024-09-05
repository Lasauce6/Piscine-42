/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:31:10 by rbaticle          #+#    #+#             */
/*   Updated: 2024/09/01 16:39:06 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_printable(char c)
{
	if (c < 32 || c > 126)
		return (0);
	else
		return (1);
}

void	print_adress(int i)
{
	write(1, &i, 1);
	write(1, ": ", 2);
}

void	print_hex(char *str, int i, int size)
{
	int				j;
	unsigned char	c;

	j = 0;
	while (j < 16)
	{
		if (i + j < size)
		{
			c = str[i + j];
			write(1, &"0123456789ABCDEF"[c / 16], 1);
			write(1, &"0123456789ABCDEF"[c % 16], 1);
		}
		else
			write(1, "  ", 2);
		j++;
		if (j % 2 == 0 && j != 0)
			write(1, " ", 1);
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	int				j;
	char			*str;

	i = 0;
	str = addr;
	while (i < size)
	{
		print_adress(i);
		print_hex(str, i, size);
		j = 0;
		while (j < 16)
		{
			if (is_printable(str[i + j]) && i + j < size)
				write(1, &str[i + j], 1);
			else if (i + j < size)
				write(1, ".", 1);
			j++;
		}
		i += 16;
		write(1, "\n", 1);
	}
	return (addr);
}
