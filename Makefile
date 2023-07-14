NAME=Calemlib.a
CC=gcc
CFLAGS=-Wall -Wextra -I./include
SRC=window.c #$(wildcard src/*.c)
OBJ=$(SRC:.c=.o)
RM=rm -f


all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ) 
	@ranlib $(NAME)
	@echo "Compilation of $(NAME) : \033[1;32mOK\033[0m"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@


clean:
	@$(RM) $(OBJ)
	@echo "Clean of $(NAME) : \033[1;32mOK\033[0m"

fclean: clean
	@$(RM) $(NAME)
	@echo "Fclean of $(NAME) : \033[1;32mOK\033[0m"

re: fclean all

.PHONY: all clean fclean re