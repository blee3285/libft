# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    sources.mk                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blee <blee@student.42.us.org>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/23 17:57:29 by blee              #+#    #+#              #
#    Updated: 2017/10/12 19:22:09 by blee             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Numbers

LIBFT =		ft_atoi.c \
			ft_itoa.c \
			ft_abs.c \
			ft_itoa_base.c \
			ft_numlen.c \
			ft_sort_int.c

# Is

LIBFT += 	ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_isprime.c

# List

LIBFT +=	ft_lstadd.c \
			ft_lstdel.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstmap.c \
			ft_lstnew.c \
			ft_lstdelnode.c

# Memory

LIBFT +=	ft_memalloc.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memdel.c \
			ft_memmove.c \
			ft_memset.c \
			ft_bzero.c

# Puts

LIBFT +=	ft_putchar.c \
			ft_putchar_fd.c \
			ft_putendl.c \
			ft_putendl_fd.c \
			ft_putnbr.c \
			ft_putnbr_fd.c \
			ft_putstr.c \
			ft_putstr_fd.c

# String

LIBFT +=	ft_strcat.c \
			ft_strchr.c \
			ft_strclr.c \
			ft_strcmp.c \
			ft_strcpy.c \
			ft_strdel.c \
			ft_strdup.c \
			ft_strequ.c \
			ft_striter.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlen.c \
			ft_strmap.c \
			ft_strmapi.c \
			ft_strncat.c \
			ft_strncmp.c \
			ft_strncpy.c \
			ft_strnequ.c \
			ft_strnew.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strsplit.c \
			ft_strstr.c \
			ft_strsub.c \
			ft_strtrim.c \
			ft_strsplit_lst.c

# Other

LIBFT +=	ft_tolower.c \
			ft_toupper.c \
			ft_swap.c \
			ft_intarray.c

SRC_FILES = $(addprefix libft/, $(LIBFT))


# get_next_line

GNL =		get_next_line.c

SRC_FILES += $(addprefix gnl/, $(GNL))

# ft_printf

PRINTF =	build_str.c \
			conversion.c \
			flags.c \
			flags2.c \
			formats.c \
			formats2.c \
			formats3.c \
			ft_printf.c \
			lengths.c \
			precision.c \
			printf_putstr.c \
			wchar.c \
			width.c \
			wstr.c \
			wstr2.c

SRC_FILES += $(addprefix ft_printf/, $(PRINTF))

# btree

BTREE =		ft_btadd.c \
			ft_btnew.c \
			ft_btinfix.c \
			ft_btprefix.c \
			ft_btsuffix.c \
			ft_btdel.c

SRC_FILES += $(addprefix btree/, $(BTREE))

C_FILES = $(LIBFT) $(GNL) $(PRINTF) $(BTREE)
SUB_DIR = libft gnl ft_printf btree
