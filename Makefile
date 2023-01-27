NAME    = push_swap
CFLAGS  = -Wall -Wextra -Werror -g
SRC		= main.c push.c rotate.c swap.c force.c ft_normalize.c ft_error.c parser.c memory.c sorts.c ft_algorithm.c
OBJ		= ${addprefix obj/, ${SRC:.c=.o}}
LIBFT = libft/libft.a
INC = -I libft/includes
COLOUR_GREEN=\033[0;32m
COLOUR_RED=\033[0;31m
COLOUR_BLUE=\033[0;34m
COLOUR_END=\033[0m

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	@gcc $(CFLAGS) $(OBJ) $(INC) -o $(NAME) $(LIBFT)
	@echo "$(COLOUR_GREEN)🔥 🔥 Compliling Everything ✅ ✅$(COLOUR_END)"

$(LIBFT):
	@make -C libft

clean:
	@rm -rf obj
	@make -C libft/ clean
	@echo "$(COLOUR_RED)🔥 🔥 Deleting all .o Files 🗑️ 🗑️$(COLOUR_END)"
fclean: clean
	@rm -f $(NAME)
	@make -C libft/ fclean
	@echo "$(COLOUR_RED)🔥 🔥 Deleting .a File 🗑️ 🗑️$(COLOUR_END)"

obj/%.o: %.c
	@mkdir -p obj
	@gcc $(CFLAGS) -o $@ -c $<

re: fclean all

.PHONY: all clean fclean re