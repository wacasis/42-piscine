NAME = libft.a

cc = cc
gcc = -Wall -Wextra -Werror
SRC = ft_isalpha.c 
// ajt toutes les fonctions later

OBJ = $(SRC: .c=.o)
all: $(NAME)
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJ)
fclean:	clean
		rm -f $(NAME)
re: fclean all 

.Phony: all clean fclean re