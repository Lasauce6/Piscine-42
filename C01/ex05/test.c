/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 09:48:37 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/15 10:05:03 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

int	main(void)
{
	char	*str;

	str = NULL;
	ft_putstr(str);
	write(1, "\n", 1);
	str = "";
	ft_putstr(str);
	write(1, "\n", 1);
	str = "badabioupbipboupbadaboup\n";
	ft_putstr(str);
}
