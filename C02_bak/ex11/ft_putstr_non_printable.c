/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:50:28 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/17 15:44:09 by rbaticle         ###   ########.fr       */
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
	int		i;
	char	c;

	i = 0;
	if (str != 0x0)
	{
		while (str[i] != '\0')
		{
			if (is_printable(str[i]))
				write(1, &str[i], 1);
			else
			{
				write(1, "\\", 1);
				c = "0123456789abcdef"[str[i] / 16];
				write(1, &c, 1);
				c = "0123456789abcdef"[str[i] % 16];
				write(1, &c, 1);
			}
			i++;
		}
	}
}
