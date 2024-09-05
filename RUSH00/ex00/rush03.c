/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 10:01:27 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/17 11:51:36 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	write_char(int x, int y, int line, int col)
{
	if ((line == 1 && col == 1)
		|| (line == y && col == 1))
		ft_putchar('A');
	else if ((line == 1 && col == x)
		|| (line == y && col == x))
		ft_putchar('C');
	else if (line == 1 || line == y || col == 1 || col == x)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	l;
	int	c;

	l = 1;
	while (l <= y)
	{
		c = 1;
		while (c <= x)
		{
			write_char(x, y, l, c);
			c++;
		}
		ft_putchar('\n');
		l++;
	}
}
