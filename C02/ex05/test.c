/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:41:55 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/15 18:35:11 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	*str;
	int		a;

	str = "ZwajrbgahvfawefhawevjQEFUWEHFVWEOFHWEFWzAa";
	a = ft_str_is_uppercase(str);
	printf("%d\n", a);
	str = "ABCDEFGHIJKLMNOPQRSTUV";
	a = ft_str_is_uppercase(str);
	printf("%d\n", a);
	str = "";
	a = ft_str_is_uppercase(str);
	printf("%d\n", a);
}
