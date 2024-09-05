/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 13:43:04 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/17 13:46:05 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (s1 == 0x0 && s2 == 0x0)
		return (0);
	else if (s1 == 0x0)
		return (0 - s2[i]);
	else if (s2 == 0x0)
		return (0 + s1[i]);
	while ((s1[i] != '\0' || s2[i] != '\0')
		&& i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] != '\0' && i < n)
		return (0 + s1[i]);
	if (s2[i] != '\0' && i < n)
		return (0 - s2[i]);
	return (0);
}
