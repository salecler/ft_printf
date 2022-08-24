# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: salecler <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/24 11:55:33 by salecler          #+#    #+#              #
#    Updated: 2022/08/24 12:01:40 by salecler         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS		= -Wall -Wextra -Werror

SRCS =		src/ft_format.c		\
			src/ft_printf.c		\
			src/ft_printf_utils.c		

OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a
RM = /bin/rm -f

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

$(OBJS):
	$(CC) $(CFLAGS) -c $(SRCS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean $(NAME)

.PHONY: all fclean clean re
