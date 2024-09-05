/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaporte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:48:07 by nlaporte          #+#    #+#             */
/*   Updated: 2024/08/31 14:54:48 by nlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return i;
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i] && i < n)
		i++;
	return (s1[i] - s2[i]);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(to_find);
	if (j <= 0)
		return (NULL);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			if (ft_strncmp(&str[i], to_find, j - 1) == 0)
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}

int	ft_get_file_size()
{
	int i;
	int fd;

	i = 0;
	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
		return -1;

	char *c = malloc(4);
	while (read(fd, c, 1))
		i++;
	close(fd);
	return i;
}

char *ft_get_name(char *str)
{
	int i;
	int j;
	char *t;
	i = 0;
	j = 0;
	t = malloc(5000);
	while (str[i])
	{
		if (str[i] != ':')
			i++;
		else 
			break;
	}
	if (str[i] != ':')
		return NULL;
	i++;
	while (str[i])
	{
		if (str[i] == ' ')
			i++;
		else 
			break;
	}
	while (str[i])
	{
		if (str[i] != '\n')
			t[j++] = str[i++];
		else 
			break;
	}
	return (t);
}

int main(int ac, char **av)
{
	(void)ac;
	(void)av;

	int fd;
	int i;
	int size;
	char test[20] = "1000";

	i = 0;
	size = ft_get_file_size();
	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
		return 0;

	char *c = malloc(size * sizeof(char));
	read(fd, c, size-1);
	char *mdr = ft_strstr(c, test);
	//char cpy[450];
	if (mdr == NULL)
	{
		printf("ERROR\n");
		return -1;
	}
	printf("Line: %s", ft_get_name(mdr));
	close(fd);
	return 0;
}
