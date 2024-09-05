/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:38:43 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/22 17:05:28 by rbaticle         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb < 0)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}
