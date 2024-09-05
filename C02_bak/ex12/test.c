/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 09:19:32 by rbaticle          #+#    #+#             */
/*   Updated: 2024/08/17 09:28:00 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char	*str;
	
	str = "bonsoir erahaer awrrh arjarwt aruthauhr aurh";
	ft_print_memory(str, 40);
}
