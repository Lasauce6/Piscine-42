/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:50:28 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/19 17:04:08 by rbaticle         ###   ########.fr       */
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

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	c;

	i = 0;
	if (str != 0x0)
	{
		while (str[i])
		{
			if (is_printable(str[i]))
				write(1, &str[i], 1);
			else
			{
				c = str[i];
				write(1, "\\", 1);
				write(1, &"0123456789abcdef"[c / 16], 1);
				write(1, &"0123456789abcdef"[c % 16], 1);
			}
			i++;
		}
	}
}
