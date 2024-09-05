/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 10:30:20 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/26 14:23:33 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			*src;
	char			*src2;
	char			dest[20] = {"Rambouillet "};
	char			dest2[20] = {"Rambouillet "};

	src = "iprout";
	printf("%d\n", ft_strlcat(dest, src, 66));
	printf("%s\n", dest);
	src2 = "iprout";
	printf("%zu\n", strlcat(dest2, src2, 66));
	printf("%s\n", dest2);
	return (0);
}
