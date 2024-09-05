#!/bin/sh

cc -Wall -Werror -Wextra -c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c ft_putchar.c
ar rcs libft.a *.o
rm *.o
