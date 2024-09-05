/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 09:19:32 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/19 18:02:30 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char	*str;
	
	str = "bonsoir era\t\nhaer awrrh\n\0 arjarwt aruthauhr aurh";
	ft_print_memory(str, 40);
}
