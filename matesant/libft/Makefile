NAME = libft.a
CC = cc
FLAGS = -Wall -Werror -Wextra
RM = rm -rf

OBJS_PATH = ./bin/
HEADER = ./include/
SRCS = \
	ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c \

SRCS_BONUS = \
	ft_lstadd_back_bonus.c \
	ft_lstadd_front_bonus.c \
	ft_lstclear_bonus.c \
	ft_lstdelone_bonus.c \
	ft_lstiter_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstmap_bonus.c \
	ft_lstnew_bonus.c \
	ft_lstsize_bonus.c \


OBJS = $(addprefix $(OBJS_PATH), $(SRCS:.c=.o))
OBJS_BONUS = $(addprefix $(OBJS_PATH), $(SRCS_BONUS:.c=.o))

.PHONY: clean fclean re all

all: $(OBJS_PATH) $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $?

$(OBJS_PATH)%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@ -I $(HEADER)

$(OBJS_PATH):
	mkdir -p $(OBJS_PATH)

bonus:
	@make OBJS="$(OBJS_BONUS)" --no-print-directory

clean:
	$(RM) $(OBJS_PATH)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(OBJS_PATH)

re: fclean all
