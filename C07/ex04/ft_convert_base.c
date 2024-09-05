/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 11:22:57 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/29 12:52:34 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	check_base(char *base);

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

int	get_pos(long nb)
{
	if (nb < 0)
		return (nb * -1);
	if (nb == 0)
		return (1);
	return (nb);
}

char	*putnbr_base(long nb, char *base, int size)
{
	int		i;
	char	*res;
	int		base_len;

	base_len = ft_strlen(base);
	res = malloc(sizeof(char) * size);
	if (!res)
		return (0);
	if (nb < 0)
	{
		res[0] = '-';
		nb *= -1;
	}
	i = 0;
	while (nb / base_len != 0)
	{
		res[size - i++ - 1] = base[nb % base_len];
		nb /= base_len;
	}
	res[size - i - 1] = base[nb % base_len];
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	nb;
	int		size;
	long	temp;
	int		base_len;

	if (!check_base(base_from) || !check_base(base_to))
		return (0);
	nb = ft_atoi_base(nbr, base_from);
	temp = nb;
	size = 0;
	base_len = ft_strlen(base_to);
	while (temp / base_len != 0)
	{
		temp /= base_len;
		size++;
	}
	size++;
	if (nb < 0)
		size++;
	return (putnbr_base(nb, base_to, size));
}
