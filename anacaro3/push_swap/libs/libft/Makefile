NAME = libft.a

SRCS =  ft_bzero.c\
		ft_calloc.c\
		ft_ceil.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_itoa.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_putchar_fd.c\
		ft_putchar.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_putstr_fd.c\
		ft_putstr.c\
		ft_strchr.c\
		ft_strdup.c\
		ft_striteri.c\
		ft_strjoin.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_atoi.c\
		ft_atol.c\
		ft_split.c\
		ft_strlcat.c\
		ft_strmapi.c\
		ft_strncmp.c\
		ft_strtrim.c\
		ft_substr.c\

INCLUDE = .

OBJS = $(patsubst %.c, %.o, $(SRCS))

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS) 

$(OBJS) : $(SRCS) 
	cc $(FLAGS) -c $(SRCS) -I $(INCLUDE)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all