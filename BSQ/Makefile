CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = bsq

SRC_DIR = ./srcs/
HEADER_DIR = ./includes/

SOURCES_NAME = main.c \
			   bsq.c \
			   utils.c \
			   file_utils.c \
			   check_file.c \
			   try_square.c
SOURCES = $(addprefix $(SRC_DIR), $(SOURCES_NAME))
OBJECTS = $(SOURCES:.c=.o)

all: obj $(NAME)

obj: $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER_DIR)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME) debug

re: fclean all

$(NAME):
	$(CC) $(CFLAGS) -o $@ $(OBJECTS) -I $(HEADER_DIR)

debug:
	$(CC) $(CFLAGS) -g -o $@ $(SOURCES) -I $(HEADER_DIR)

.PHONY: clean fclean $(NAME) debug
