HEAD = libft.h

SRC = ft_isalpha.c\
      ft_isalnum.c\
      ft_isascii.c\
      ft_isdigit.c\
      ft_isprint.c\
      ft_strlen.c\
      ft_memset.c\
	  ft_bzero.c\
	  ft_memcpy.c\
	  ft_memmove.c\
	  ft_strlcpy.c\
	  ft_strlcat.c\
	  ft_tolower.c\
	  ft_toupper.c\
	  ft_atoi.c
CC = gcc

OBJ = $(SRC:.c=.o)

NAME = libft.a

CFLAGS += -Wall -Werror -Wextra

 
  	

start: fclean
	$(CC) $(CFLAGS) -c $(SRC) 
	ar rc $(NAME) $(OBJ) 
	
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean re
