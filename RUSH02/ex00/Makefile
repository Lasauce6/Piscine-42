CC = cc
NAME = rush-02

SOURCES = main.c \
		  utils.c \
		  utils2.c \
		  file_utils.c 
OBJECTS = $(SOURCES:.c=.o)

HEADERS = ft_rush.h

CFLAGS = -Wall -Wextra -Werror

all: obj $(NAME)

obj: $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADERS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

$(NAME): 
	$(CC) $(CFLAGS) $(OBJECTS) -o $@ -I $(HEADERS)

.PHONY: clean fclean $(NAME)
