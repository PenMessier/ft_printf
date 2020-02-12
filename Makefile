# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frenna <frenna@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/17 10:35:56 by Elena             #+#    #+#              #
#    Updated: 2020/01/16 13:06:18 by frenna           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

SRC_NAMES = ft_printf.c parse.c ft_parse.c is_valid.c ft_strchr.c ft_strncpy.c ft_atoi.c \
		ft_isdigit.c ft_buffer.c num_transform.c ch_transform.c ft_itoa_pf.c ft_utoa_pf.c \
		ft_itoa_base.c p_transform.c ft_ldtoa_pf.c ft_power.c ft_memset.c
SRCS = $(addprefix srcs/, $(SRC_NAMES))

OBJS = $(SRC_NAMES:%.c=%.o)

INCLUDES = includes/libftprintf.h

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

$(OBJS):
	gcc $(FLAGS) -c $(SRCS) $(INCLUDES)

clean:
	/bin/rm -f $(OBJS)
	
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
