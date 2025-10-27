NAME = tests

SRC = main.c\
      tester_is.c

CC = gcc

CFLAGS += -Wall -Werror -Wextra

OBJS = $(SRC:.c=.o)

LIB = ../libftprintf.a

all: lib $(OBJS)
	$(CC) $(OBJS) $(LIB) $(CFLAGS)  -o $(NAME) -lbsd

$(OBJS):
	$(CC) -c $(SRC)
lib: fclean
	(cd ../&& make)
	echo "printflib created"

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	(cd ../../libft && make fclean)
re: fclean $(NAME)

.PHONY: test clean fclean re
