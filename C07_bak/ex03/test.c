/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 09:06:49 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/24 09:13:19 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	*sep;
	char	*strs[3];
	char	*str;

	sep = ";";
	strs[0] = "bibi";
	strs[1] = "baba";
	strs[2] = "bubu";
	str = ft_strjoin(0, strs, sep);
	printf("%s\n", str);
	free(str);
}
