#VARS

NAME = push_swap

LIBS_DIR = ./libs/

LIBFT_DIR = $(LIBS_DIR)libft/

SRCS =	./src/main.c\
		./src/args_checker.c\
		./src/linked_list.c\
		./src/op_push.c\
		./src/op_swap.c\
		./src/op_rotate.c\
		./src/op_rev_rotate.c\
		./src/push_swap.c\
		./src/radix.c\
		./src/sort.c\
		./src/sort_p2.c\
		./src/stack_utils_p1.c\
		./src/stack_utils_p2.c

INC =	push_swap.h

LIBS =	$(LIBFT_DIR)libft.a

OBJS = $(patsubst %.c, %.o, $(SRCS))

#ARG="1 5 2"; ./push_swap $ARG | ./checker_linux $ARG
#ARG="5185641 54545 8888 99151 -8"; ./push_swap $ARG | wc -l
#ARG=$(seq -250 249 | shuf); valgrind --show-leak-kinds=all --leak-check=full --quiet ./push_swap $ARG
FLAGS = -O3 -Wall -Wextra -Werror -g3

#RECIPES

all : make_libs $(NAME)

$(NAME) : $(OBJS)
	cc $(OBJS) $(LIBS) $(FLAGS) -o $(NAME) -I $(INC)
	@echo "\033[44mREADY\033[0m"

#norminette  libs/libft src

%.o : %.c
	cc $(FLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)
	make clean -C $(LIBFT_DIR)
	@echo "\033[36mCLEAN? OK!\033[0m"

fclean : clean
	rm -f $(OBJS) $(NAME)
	make fclean -C $(LIBFT_DIR)
	@echo "\033[33mFCLEAN? DONE!\033[0m"

re : fclean all

make_libs :
	@make -C $(LIBFT_DIR) --no-print-directory

.PHONY : all clean fclean re

# = variavel, atribuição
# Target = nome regra : dependencia - opcional
# Recipe = o que vai ser executado qdo e se a dependencia for encontrar
#PHONY ignora arquivos de mesmo nome na pasta, priorizando a regra do make
#-o output