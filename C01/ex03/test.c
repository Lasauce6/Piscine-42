/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 19:23:46 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/14 19:40:18 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;
	int	divn;
	int	modn;

	a = 5;
	b = 2;
	div = &divn;
	mod = &modn;
	ft_div_mod(a, b, div, mod);
	printf("%d %d\n", divn, modn);
}
