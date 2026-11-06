# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: colauren <colauren@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/02 12:28:08 by colauren          #+#    #+#              #
#    Updated: 2026/11/03 15:06:46 by colauren         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

cc = cc
gcc = -Wall -Wextra -Werror
SRC = ft_isalpha.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_ismemset.c \
	  ft_strlen.c \
	  ft_bzero.c \
	  ft_memcpy.c \

OBJ = $(SRC:.c=.o)
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