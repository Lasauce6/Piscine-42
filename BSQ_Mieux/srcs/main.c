/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:57:57 by rbaticle          #+#    #+#             */
/*   Updated: 2024/09/04 18:02:19 by rbaticle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int	read_std0_friend(t_element **e, t_element **e2, char c, t_list list)
{
	t_element	*e3;
	t_element	*e4;

	*e2 = malloc(sizeof(t_element));
	if (!*e2)
	{
		e3 = list.first;
		while (e3->next)
		{
			e4 = e3->next;
			free(e3);
			e3 = e4;
		}
		free(e3);
		return (0);
	}
	(*e2)->c = c;
	(*e)->next = *e2;
	*e = *e2;
	return (1);
}

t_list	read_std0(void)
{
	t_list		list;
	t_element	*e;
	t_element	*e2;
	char		c;
	int			i;

	i = 0;
	while (read(0, &c, 1))
	{
		if (i++ == 0)
		{
			e = malloc(sizeof(t_element));
			if (!e)
				return (list);
			e->c = c;
			list.first = e;
		}
		else if (!read_std0_friend(&e, &e2, c, list))
			return (list);
	}
	e->next = 0;
	list.size = i;
	return (list);
}

char	*get_str_from_list(t_list list)
{
	int			i;
	char		*file_str;
	t_element	*e;
	t_element	*e2;

	file_str = malloc(list.size + 1);
	if (!file_str)
		return (0);
	i = 0;
	e = list.first;
	while (e->next)
	{
		file_str[i] = e->c;
		e2 = e->next;
		free(e);
		e = e2;
		i++;
	}
	file_str[i] = e->c;
	free(e);
	file_str[i + 1] = '\0';
	return (file_str);
}

void	from_argv(int argc, char **argv)
{
	int		i;
	char	*file_str;

	i = 1;
	while (i < argc)
	{
		file_str = get_file(argv[i++]);
		if (check_map(file_str))
		{
			if (!bsq(file_str))
				write(2, "map error\n", 10);
		}
		else
			write(2, "map error\n", 10);
		free(file_str);
	}
}

int	main(int argc, char **argv)
{
	char	*file_str;
	t_list	list;

	if (argc > 1)
	{
		from_argv(argc, argv);
	}
	else
	{
		list = read_std0();
		file_str = get_str_from_list(list);
		if (check_map(file_str))
		{
			if (!bsq(file_str))
				write(2, "map error\n", 10);
		}
		else
			write(2, "map error\n", 10);
		free(file_str);
	}
	return (0);
}
