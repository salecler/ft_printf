# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: salecler <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/24 11:55:33 by salecler          #+#    #+#              #
#    Updated: 2022/08/24 14:54:05 by salecler         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables

NAME = libftprintf.a
CC		= gcc
CFLAGS		= -Wall -Wextra -Werror -I
RM = rm -fr
SRC_DIR = src/
INCLUDE = include/ft_printf.h
OBJ_DIR = obj/
#Colors

DEF_COLOR = \033[0;39m
GREEN = \033[0;92m
WHITE = \033[0;97m

#Sources

SRCS_FILES =		ft_format.c		\
					ft_printf.c		\
					ft_printf_utils.c

###


.c.o:
	$(CC) $(CFLAGS) $(SRCS_FILES) -c

$(NAME): $(OBJS)
	@echo "$(WHITE)Compiling: $< $(DEF_COLOR)"
	@ar rcs $(NAME) $(OBJS)
	@$(CC) $(CFLAGS) $(NAME)
	@echo "$(GREEN)ft_printf compiled!$(DEF_COLOR)👾"


all: $(NAME)

clean:
	@$(RM) -fr $(OBJS)
	@echo "$(WHITE)ft_printf object files cleaned!$(DEF_COLOR)"

fclean: clean
	@$(RM) -f $(NAME)
	@echo "$(WHITE)ft_printf executable files cleaned!$(DEF_COLOR)"

re:	fclean all
	@echo "$(WHITE)cleaned and rebuilt!$(DEF_COLOR)"

.PHONY: all fclean clean re
