/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 10:30:20 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/18 10:40:00 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			*src;
	char			dest[10];
	unsigned int	size;

	src = "bouboup";
	dest[0] = 'd';
	size = 10;
	size = ft_strlcat(dest, src, size);
	printf("%d\n", size);
	printf("%s\n", dest);
	return (0);
}
