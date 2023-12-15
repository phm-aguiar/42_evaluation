# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/19 04:20:45 by  rapgonca         #+#    #+#              #
#    Updated: 2023/09/18 15:41:03 by phenriq2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS =	stack.c \
		utils.c \
		sort.c \
		push.c \
		reverse_rotate.c \
		reverse.c \
		swap.c\
		push_swap.c\

FT_PRINTF_DIR = ft_printf

FT_PRINTF = $(FT_PRINTF_DIR)/libftprintf.a

OBJ = $(SRCS:.c=.o)


CFLAGS = -Wall -Wextra -Werror -O3

$(NAME): $(FT_PRINTF) $(OBJ)
	cc $(CFLAGS) $(SRCS) $(FT_PRINTF) -o $(NAME)


all: $(NAME)

$(FT_PRINTF):
	$(MAKE) -C $(FT_PRINTF_DIR)

clean:
	rm -rf $(OBJ)
	make clean -C ./ft_printf

fclean: clean
	rm -f $(NAME)
	make fclean -C ./ft_printf

re: fclean all

.PHONY: all clean fclean re
