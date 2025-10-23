CC = gcc

FLAGS = -Wall -Wextra -Werror -D BUFFER_SIZE=42

SRC =   get_next_line.c\
		get_next_line_utils.c\
		main.c

OBJ = $(SRC:.c=.o)

FILE_NAME = test.txt

NAME = a.out

all: fclean $(NAME) run

run : $(NAME)
	./$(NAME) $(FILE_NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

$(OBJ) :
	$(CC) $(FLAGS) -c $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
