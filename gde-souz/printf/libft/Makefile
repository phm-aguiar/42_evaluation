# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gde-souz <gde-souz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/19 11:35:37 by gde-souz          #+#    #+#              #
#    Updated: 2023/09/14 13:42:39 by gde-souz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc -Wall -Wextra -Werror
AR = ar -rcs
NAME = libft.a
SRC = ft_strlen.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_strchr.c

OBJ = $(SRC:%.c=%.o)
HD = ./libft.h

all: $(NAME)

%.o:%.c
	@$(CC) -c $< -o $@ -I $(HD)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@rm -f $(HD)*.gch

re: fclean all

.PHONY: all clean fclean re