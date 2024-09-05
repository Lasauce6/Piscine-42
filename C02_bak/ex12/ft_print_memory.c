/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:31:10 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/17 09:56:23 by rbaticle         ###   ########.fr       */
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

void	print_hex(char *str, int i)
{
	int	j;

	j = 0;
	while (j < 16)
	{

	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = addr;
	while (i < size)
	{
		print_adress(i);
		i += 16;	
	}
	return (addr);
}
