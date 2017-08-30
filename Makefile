# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blee <blee@student.42.us.org>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/23 19:22:42 by blee              #+#    #+#              #
#    Updated: 2017/08/29 19:51:11 by blee             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

-include sources.mk

NAME = libft.a

OBJ_DIR = ./objs
SRC_DIR = ./srcs

SRCS = $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJS = $(addprefix $(OBJ_DIR)/, $(SRC_FILES:.c=.o))

all: $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(SUB_DIR): $(OBJ_DIR)
	mkdir -p $(OBJ_DIR)/$@

$(OBJS): $(SRCS)
	gcc -Wall -Wextra -Werror -c $< -o $@

$(NAME): $(SUB_DIR) $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all
