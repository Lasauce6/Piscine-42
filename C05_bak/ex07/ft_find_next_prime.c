/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 09:38:43 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/21 09:53:18 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long	i;
	int		c;

	i = 1;
	c = 0;
	if (nb < 2)
		return (0);
	while (i <= nb)
	{
		if (nb % i == 0)
			c++;
		i++;
	}
	if (c <= 2)
		return (1);
	return (0);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 0)
		nb = 0;
	if (ft_is_prime(nb))
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}
