/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 11:29:37 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/24 11:29:45 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base != 0x0)
	{
		while (base[i] != '\0')
		{
			j = i + 1;
			if (base[i] == '+' || base[i] == '-' || base[i] == ' '
				|| base[i] == '\f' || base[i] == '\n' || base[i] == '\v'
				|| base[i] == '\r' || base[i] == '\t')
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
	if (i < 2)
		return (0);
	return (i);
}

int	get_nb(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	return (i);
}

int	in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i++] == c)
			return (1);
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	n;
	int	sign;
	int	base_len;

	i = 0;
	n = 0;
	sign = 1;
	base_len = check_base(base);
	if (str != 0x0 && base_len)
	{
		while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
			i++;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i++] == '-')
				sign = -sign;
		}
		while (str[i] != '\0' && in_base(str[i], base))
			n = (n * base_len) + get_nb(str[i++], base);
	}
	return (n * sign);
}
