NAME = libftprintf.a

SRC = \
      ft_printf.c\
	  ft_printf_utils.c\
	  ft_printf_utils_2.c

CC = cc

FLAGS += -Wall -Werror -Wextra

OBJS = $(SRC:.c=.o)

LIB = ./libft/libft.a

all: lib $(OBJS) arr

arr:
	ar rc $(NAME) $(OBJS) $(LIB)


$(OBJS):
	$(CC) $(CFLAGS) -c $(SRC)

lib: fclean
	(cd ./libft && make)
	echo "lib created"

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	(cd ./libft && make fclean)
re: fclean $(NAME)

.PHONY: test clean fclean re
