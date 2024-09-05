CC = gcc
LIB_NAME = libft.a
SRC_DIR = ./srcs/
HEADER_FILES = ./includes/

SOURCES_NAMES = ft_putchar.c \
		  ft_swap.c \
		  ft_putstr.c \
		  ft_strlen.c \
		  ft_strcmp.c
OBJECT_NAMES = $(SOURCES_NAMES:.c=.o)
SOURCES = $(addprefix $(SRC_DIR), $(SOURCES_NAMES))
OBJECTS = $(SOURCES:.c=.o)

HEADERS = ft.h
CFLAGS += -Wall -Wextra -Werror


all: obj $(LIB_NAME)

obj: $(OBJECTS)

$(SRC_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADERS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(LIB_NAME)

re : fclean all

$(LIB_NAME):
	ar rc $@ $(OBJECTS)

.PHONY: clean fclean
