NAME = tests

SRC = \
      main.c

CC = cc

FLAGS += -Wall -Werror -Wextra

OBJS = $(SRC:.c=.o)

LIB = ../libftprintf.a

all: lib $(OBJS) $(NAME) run

run:
	./$(NAME)

$(NAME):
	$(CC) $(OBJS) $(LIB) $(CFLAGS)  -o $(NAME)

$(OBJS):
	$(CC) $(CFLAGS) -c $(SRC)

lib: fclean
	(cd ../ && make)
	echo "lib created"

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	(cd ../ && make fclean)
re: fclean $(NAME)

.PHONY: test clean fclean re
