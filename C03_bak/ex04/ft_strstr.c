/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:06:58 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/18 14:59:03 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		c;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			c = 1;
			while (str[i + c] == to_find[c])
			{
				if (to_find[c + 1] == '\0')
					return (&str[i]);
				c++;
			}
		}
		i++;
	}
	return (0x0);
}
