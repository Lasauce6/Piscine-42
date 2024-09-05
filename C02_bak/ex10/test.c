/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 12:41:14 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/16 12:55:05 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			dest[7];
	char			*src;
	unsigned int	size;

	src = "bonjour";
	size = 6;
	printf("src : %s\ndest : %s\n", src, dest);
	ft_strlcpy(dest, src, size);
	printf("src : %s\ndest : %s\n", src, dest);
}
