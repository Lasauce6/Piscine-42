/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:23:57 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/26 13:58:49 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(int argc, char **argv)
{
	if (argc > 2)
	{
		printf("%s\n", ft_strstr(argv[1], argv[2]));
		printf("%s\n", strstr(argv[1], argv[2]));
	}
	return (0);
}
