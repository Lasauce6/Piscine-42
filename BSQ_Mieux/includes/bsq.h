/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:15:25 by rbaticle          #+#    #+#             */
/*   Updated: 2024/09/04 14:57:23 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_map
{
	int		nb_lines;
	int		nb_cols;
	char	empty;
	char	obstacle;
	char	full;
	char	**map;
}	t_map;

typedef struct s_square
{
	int	x;
	int	y;
	int	size;
	int	tilted;
}	t_square;

typedef struct s_element
{
	char				c;
	struct s_element	*next;
}	t_element;

typedef struct s_list
{
	int			size;
	t_element	*first;
}	t_list;

int			bsq(char *file_str);
char		*ft_strndup(char *src, int n);
int			ft_atoi(char *str);
int			get_line_size(char *str_map);
int			get_first_line_size(char *file_str);
char		*get_file(char *filename);
int			ft_strlen(char *str);
int			check_map(char *str);
t_square	biggest_square(t_map map);
void		put_square(t_map *map, t_square square);
int			try_tilted_square(t_square sq, t_map map);
void		put_tilted_square(t_map *map, t_square square);

#endif
