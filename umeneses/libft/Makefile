# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile copy                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/26 20:31:36 by umeneses          #+#    #+#              #
#    Updated: 2023/09/03 16:09:24 by umeneses         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 				= libft.a

AUTHOR				= umeneses

SRC_FTS				= ft_atoi.c		\
					ft_bzero.c		\
					ft_calloc.c		\
					ft_isalnum.c	\
					ft_isalpha.c	\
					ft_isascii.c	\
					ft_isdigit.c	\
					ft_isprint.c	\
					ft_memchr.c		\
					ft_memcmp.c		\
					ft_memcpy.c		\
					ft_memmove.c	\
					ft_memset.c		\
					ft_strchr.c		\
					ft_strdup.c		\
					ft_strlcat.c	\
					ft_strlcpy.c	\
					ft_strlen.c		\
					ft_strncmp.c	\
					ft_strnstr.c	\
					ft_strrchr.c	\
					ft_tolower.c	\
					ft_toupper.c	\
					ft_substr.c		\
					ft_itoa.c		\
					ft_putchar_fd.c	\
					ft_putstr_fd.c	\
					ft_putendl_fd.c	\
					ft_putnbr_fd.c	\
					ft_striteri.c	\
					ft_strmapi.c	\
					ft_strjoin.c	\
					ft_split.c		\
					ft_strtrim.c

INCLUDE				= libft.h

OBJS 				= $(SRC_FTS:.c=.o)

AR 					= ar -rcs

RM 					= rm -f

CC 					= cc

CFLAGS 				= -Wall -Wextra -Werror

all:				$(NAME)

$(NAME):			$(OBJS)

%.o: %.c
					$(CC) -c $(CFLAGS) $< -o $@
					$(AR) $(NAME) $@

clean:
					$(RM) $(OBJS)

fclean:				clean
					$(RM) $(NAME)

re:					fclean all

.PHONY:				all clean fclean re