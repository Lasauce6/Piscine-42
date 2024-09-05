/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:41:38 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/21 09:02:54 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sqrt_rec(int nb, int res)
{
	if (nb % 2 != 0 || nb < 2)
		return (0);
	if (nb == 2)
		return (res);
	else
		return (sqrt_rec(nb / 2, res + 1));
}

int	ft_sqrt(int nb)
{
	if (nb == 2)
		return (0);
	if (nb == 1)
		return (1);
	return (sqrt_rec(nb, 1));
}
