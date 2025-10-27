NAME = libftprintf.a

SRC = main.c\
      tester_is.c\
	  tests_2part.c

CC = cc

CFLAGS += -Wall -Werror -Wextra

OBJS = $(SRC:.c=.o)

LIB = libft/libft.a
LIBNAME = libft.a

all: lib $(OBJS) $(NAME)
	$(CC) $(OBJS) $(LIB) $(CFLAGS)  -o $(NAME) -lbsd

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS) $(LIBNAME)

$(OBJS):
	$(CC) -c $(SRC)

lib: fclean
	(cd libft && make)
	echo "lib created"

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	(cd ../../libft && make fclean)
re: fclean $(NAME)

.PHONY: test clean fclean re
