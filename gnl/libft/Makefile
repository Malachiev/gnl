# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gconroy <gconroy@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/30 21:36:03 by gconroy           #+#    #+#              #
#    Updated: 2019/02/22 14:45:30 by gconroy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

OBJ = $(patsubst %.c, %.o, $(wildcard *.c))

FLAG = -Wall -Wextra -Werror

HEADER = includes/libft.h

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)
	
%.o: %.c $(HEADER)
	gcc $(FLAG) -c $< -I includes/ -o $@
	
ex: $(NAME)
	gcc $(FLAG) main.c $(NAME)

clean:
	/bin/rm -f $(OBJ)
	
fclean: clean
	/bin/rm -f $(NAME)
	
re: fclean all
