# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/18 17:18:44 by akasaman          #+#    #+#              #
#    Updated: 2022/08/09 05:19:13 by ankasamanya      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC =	push_swap.c instructions.c input.c sort.c message.c

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