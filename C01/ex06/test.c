/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:16:11 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/15 10:53:15 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*str;
	int		a;

	str = NULL;
	a = ft_strlen(str);
	printf("%d\n", a);
	str = "";
	a = ft_strlen(str);
	printf("%d\n", a);
	str = "badabioupbipboupbadaboup\n";
	a = ft_strlen(str);
	printf("%d\n", a);
}
