/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 10:30:20 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/20 17:45:54 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			*src;
	char			*src2;
	char			dest[10];
	char			dest2[10];

	src = "bouboup";
	dest[0] = 'd';
	printf("%d\n", ft_strlcat(dest, src, 5));
	printf("%s\n", dest);
	src2 = "bouboup";
	dest2[0] = 'd';
	printf("%zu\n", strlcat(dest2, src2, 5));
	printf("%s\n", dest2);
	return (0);
}
