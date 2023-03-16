# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/05 10:41:31 by mmassa-r          #+#    #+#              #
#    Updated: 2023/01/10 16:05:24 by mmassa-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libftprintf.a
CC= cc
FLAGS= -Werror -Wextra -Wall
SRC= ft_printf.c ft_utils.c ft_other_functions.c ft_other_functions2.c
OBJ= $(SRC:.c=.o)

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)
all: $(NAME)

clean:
	rm -rf *.o
fclean: clean
	rm -rf *.a
re: fclean all
