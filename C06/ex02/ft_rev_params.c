/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:36:52 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/21 10:59:52 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	j;

	if (argc > 1)
	{
		while (1 < argc)
		{
			j = 0;
			while (argv[argc - 1][j])
				write(1, &argv[argc - 1][j++], 1);
			write(1, "\n", 1);
			argc--;
		}
	}
	return (0);
}
