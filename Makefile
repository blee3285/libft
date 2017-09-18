# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blee <blee@student.42.us.org>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/23 19:22:42 by blee              #+#    #+#              #
#    Updated: 2017/09/18 16:33:34 by blee             ###   ########.fr        #
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
	@echo "\x1B[33mCreating: libft.a\x1B[0m"
	@mkdir -p $(OBJ_DIR)

$(SUB_DIR): $(OBJ_DIR)
	@mkdir -p $(OBJ_DIR)/$@

$(OBJS): $(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@gcc -Wall -Wextra -Werror -c $< -o $@ -I ./includes

$(NAME): $(SUB_DIR) $(OBJS)
	@echo "\x1B[32mDone\x1B[0m"
	@ar rc $(NAME) $(OBJS)

clean:
	@echo "\x1B[31mDeleted: objs\x1B[0m"
	@rm -rf $(OBJ_DIR)

fclean: clean
	@echo "\x1B[31mDeleted: libft.a\x1b[0m"
	@rm -f $(NAME)

re: fclean all
