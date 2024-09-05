/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:59:09 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/15 12:24:08 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	if (tab != 0x0)
	{
		i = 0;
		while (i < size)
		{
			j = 1 + i;
			while (j < size)
			{
				if (tab[i] > tab [j])
				{
					temp = tab[i];
					tab[i] = tab[j];
					tab[j] = temp;
				}
				j++;
			}
			i++;
		}
	}
}
