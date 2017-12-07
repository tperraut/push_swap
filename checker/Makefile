# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tperraut <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/06 15:54:33 by tperraut          #+#    #+#              #
#*   Updated: 2017/12/07 15:00:03 by tperraut         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

##########
# TARGET #
##########

NAME = checker

############
# COMPILER #
############

CC = clang
CFLAGS = -O3 -Werror -Wall -Wextra

##########
# HEADER #
##########

INC_DIR = ./include/
INC_NAME = \
	checker.h
INCLUDE = $(addprefix $(INC_DIR), $(INC_NAME))
INC = -I $(INC_DIR)

##########
# SOURCE #
##########

SRC_DIR = ./src/
SRC_NAME = \
	ft_checker.c \
	ft_create_elem.c \
	ft_init_stack.c \
	ft_swap.c \
	ft_2swap.c
SRC = $(addprefix $(SRC_DIR), $(SRC_NAME))

##########
# OBJECT #
##########

OBJ_DIR = ./obj/
OBJ_NAME = $(SRC_NAME:.c=.o)
OBJ = $(addprefix $(OBJ_DIR), $(OBJ_NAME))

#########
# RULES #
#########

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ) $(INC)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(INCLUDE)
	$(CC) $(CFLAGS) -o $@ -c $< $(INC)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

norme: $(SRC) $(INCLUDE)
	norminette $^

.PHONY: all clean fclean re norme
