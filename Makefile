# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rodrigo <rodrigo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/07 17:33:17 by rode-alb          #+#    #+#              #
#    Updated: 2022/12/13 17:06:38 by rodrigo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -*- Makefile -*-

FILES = checker.c push_swap.c

OBJS = $(FILES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

MSG1 = @echo "Compiled ✔︎"
MSG2 = @echo "Cleaned ✔︎"

NAME = push_swap

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLGS) $(OBJS) -o $(NAME) 
		$(MSG1)

clean: 
		rm -f $(OBJS)
		$(MSG2)
fclean: clean
		rm -f $(NAME)
re: fclean $(NAME)

.PHONY: all, clean, fclean, re