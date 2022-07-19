# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akasaman <akasaman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/18 17:18:44 by akasaman          #+#    #+#              #
#    Updated: 2022/07/19 16:15:42 by akasaman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC =	push_swap.c instructions.c

OBJ =	$(SRC:.c=.o)

CC = gcc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf
MV = mv

LIBFT =	./Libft/libft.a

all: $(NAME)

%.o: %.c
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "\033[92m.\033[0m\c"


$(NAME): $(OBJ) $(SRC)
	@$(MAKE) -C Libft
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME) $(LIBFT)
	@echo "\033[92mPush_swap successfully compiled!\033[0m"

clean:
	@$(MAKE) fclean -C Libft
	@$(RM) $(OBJ) 
	@echo "\033[0;31mPush_swap successfully cleaned!\033[0m"
fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re