/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:26:41 by rbaticle          #+#    #+#             */
/*   Updated: 2024/09/01 16:12:46 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char *str, char *charset);

int	main(int argc, char **argv)
{
	char	**res;
	int		i;

	res = ft_split(argv[1], argv[argc - 1]);
	i = -1;
	while (res[++i])
		printf("%s\n", res[i]);
	i = -1;
	while (res[++i])
		free(res[i]);
	free(res);
}
