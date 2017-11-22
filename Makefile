# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tperraut <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/06 15:54:33 by tperraut          #+#    #+#              #
#*   Updated: 2016/07/06 14:08:25 by tperraut         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

##########
# TARGET #
##########

NAME_1 = checker
NAME_1_DIR = ./checker/
TARGET_1 = $(addprefix $(NAME_1_DIR), $(NAME_1))

NAME_2 = push_swap
NAME_2_DIR = ./push_swap/
TARGET_2 = $(addprefix $(NAME_1_DIR), $(NAME_1))

############
# COMPILER #
############

CC = clang
CFLAGS = -O3 -Werror -Wall -Wextra

#########
# RULES #
#########

all: $(NAME_1) $(NAME_2)

$(NAME_1):
	make -C $(NAME_1_DIR)
	cp $(TARGET_1) ./

$(NAME_1):
	make -C $(NAME_2_DIR)
	cp $(TARGET_2) ./

clean:
	make clean -C $(NAME_1_DIR)
	make clean -C $(NAME_2_DIR)

fclean:
	make fclean -C $(NAME_1_DIR)
	make fclean -C $(NAME_2_DIR)

re: fclean all

norme:
	make norme -C $(NAME_1_DIR)
	make norme -C $(NAME_2_DIR)

.PHONY: all clean fclean re norme
