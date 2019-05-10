# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aymhabib <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/24 14:52:27 by aymhabib          #+#    #+#              #
#    Updated: 2019/05/03 17:24:47 by aymhabib         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line.a

CC = gcc

SRC = *.c

OBJ = *.o

CC_FLAGS = -c -Wall -Wextra -Werror

all : $(NAME)

$(NAME):
		@$(CC) $(CC_FLAGS) $(SRC)
			@ar rc $(NAME) $(OBJ)

clean:
		@rm -f *.o

fclean: clean
		@rm -f $(NAME)

re:     fclean all
