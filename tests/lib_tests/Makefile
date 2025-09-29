NAME = tests

SRC = main.c\
      tester_is.c

CC = cc

CFLAGS += -Wall -Werror -Wextra 

OBJS = $(SRC:.c=.o)

LIB = ../../libft/libft.a

all: lib $(OBJS)
	$(CC) $(OBJS) $(LIB) $(CFLAGS)  -o $(NAME)

test:
	$(CC) -c $(SRC)
lib:
	(cd ../../libft && make)
	echo "lib created"

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	(cd ../../libft && make fclean)
re: fclean $(NAME)

.PHONY: test clean fclean re
