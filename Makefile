# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blee <blee@student.42.us.org>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/23 19:22:42 by blee              #+#    #+#              #
#    Updated: 2017/08/28 19:44:37 by blee             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

-include sources.mk

NAME = libft.a

OBJ_DIR = ./obj
SRC_DIR = ./srcs

SRCS = $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJS = $(addprefix $(OBJ_DIR)/, $(C_FILES:.c=.o))

all: $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRCS) -o $(OBJ_DIR)
	ar rc $(NAME) $(OBJS)

clean:

fclean:

re: fclean all
