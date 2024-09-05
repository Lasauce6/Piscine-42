/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:58:38 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/19 16:24:17 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str != 0x0)
	{
		while (str[i] != '\0')
			i++;
	}
	return (i);
}

void	write_base(long nb, char *base, int len)
{
	if (nb < len)
		write(1, &base[nb], 1);
	else
	{
		write_base(nb / len, base, len);
		write_base(nb % len, base, len);
	}
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base != 0x0 && ft_strlen(base) > 1)
	{
		while (base[i] != '\0')
		{
			j = i + 1;
			if (base[i] == '+' || base[i] == '-')
				return (0);
			while (base[j] != '\0')
			{
				if (base[j] == base[i])
					return (0);
				j++;
			}
			i++;
		}
	}
	else
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;

	n = nbr;
	if (check_base(base))
	{
		if (n < 0)
		{
			write(1, "-", 1);
			n = -n;
		}
		write_base(n, base, ft_strlen(base));
	}
}
