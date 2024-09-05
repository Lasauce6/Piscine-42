/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 11:57:00 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/16 12:04:57 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char str[] = "salut, commeNt tu vas ? 42moTs quAraNte-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(str));
}
