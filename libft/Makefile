
NAME = libft.a

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror *.c
	ar rc $(NAME) *.o
	ranlib libft.a

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
