/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 14:40:23 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/17 14:58:23 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char			dest[10];
	char			*src;
	unsigned int	nb;

	nb = 4;
	src = "bonjour";
	dest[0] = 'b';
	printf("%s\n", ft_strncat(dest, src, nb));
}
