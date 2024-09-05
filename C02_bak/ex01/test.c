/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:44:11 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/15 16:57:32 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char			*src;
	char			dest[10];
	unsigned int	n;

	src = "bonjour";
	n = 5;
	printf("src : %s\ndest : %s\n", src, dest);
	ft_strncpy(dest, src, n);
	printf("src : %s\ndest : %s\n", src, dest);
}
