/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:04:24 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/22 17:05:11 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	app_sqrt(int nb)
{
	int	res;

	res = 1;
	while (res * res <= nb && res < 46340)
		res++;
	return (res);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	sqrt;

	sqrt = app_sqrt(nb);
	if (nb < 2)
		return (0);
	i = 2;
	while (i < sqrt)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
