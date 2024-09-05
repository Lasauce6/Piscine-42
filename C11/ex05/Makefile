# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbaticle <rbaticle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/05 11:23:52 by rbaticle          #+#    #+#              #
#    Updated: 2024/09/05 11:35:04 by rbaticle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

NAME = do-op

CFLAGS = -Wall -Wextra -Werror

SOURCES = main.c

OBJECTS = $(SOURCES:.c=.o)


all: obj $(NAME)

obj: $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): 
	$(CC) $(CFLAGS) $(OBJECTS) -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean $(NAME)
