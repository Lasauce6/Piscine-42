/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:47:43 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/17 17:15:28 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	*src;
	char	dest[3];

	src = "bonjour";
	printf("src : %s\ndest : %s\n", src, dest);
	ft_strcpy(dest, src);
	printf("dest : %s\n", dest);
}
