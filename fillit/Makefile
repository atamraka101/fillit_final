# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atamraka <atamraka@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/14 13:55:23 by egaliber          #+#    #+#              #
#    Updated: 2022/03/22 20:47:20 by atamraka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
SRC = main.c \
		mapper.c \
		parser.c \
		shifters.c \
		solver.c \
		validator.c
OBJ = $(SRC:.c=.o)
HEADER = fillit.h
LIBFT = libft/
FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME):
		make -C $(LIBFT)
		gcc $(FLAGS) -c $(SRC)
		gcc $(OBJ) libft/libft.a $(FLAGS) -o $(NAME)

clean:
			rm -f $(OBJ)
			make clean -C libft/

fclean: clean
			rm -f $(NAME)
			make fclean -C libft/

re: fclean all
