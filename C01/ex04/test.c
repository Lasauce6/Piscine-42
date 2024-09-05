/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 08:59:33 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/15 09:03:20 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	*a;
	int	*b;
	int	val_a;
	int	val_b;

	val_a = 5;
	val_b = 2;
	a = &val_a;
	b = &val_b;
	ft_ultimate_div_mod(a, b);
	printf("%d %d\n", val_a, val_b);
}
