/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:41:55 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/15 18:29:43 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	*str;
	int		a;

	str = "ZwajrbgahvfawefhawevjQEFUWEHFVWEOFHWEFWzAa";
	a = ft_str_is_lowercase(str);
	printf("%d\n", a);
	str = "abcdefghijklmnopqrstuvwxyz";
	a = ft_str_is_lowercase(str);
	printf("%d\n", a);
	str = "";
	a = ft_str_is_lowercase(str);
	printf("%d\n", a);
}
