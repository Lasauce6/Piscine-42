/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 13:33:04 by rbaticle          #+#    #+#             */
/*   Updated: 2024/09/01 15:58:48 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH_H
# define FT_RUSH_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

int 	is_input_valid(char *str);
int		ft_strlen(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_rev_strstr(char *str, char *to_find);
char	*ft_get_dict();
char	*ft_get_name(char *str);
int		ft_str_is_printable(char *str);

#endif
