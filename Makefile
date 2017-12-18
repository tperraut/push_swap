# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tperraut <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/06 15:54:33 by tperraut          #+#    #+#              #
#*   Updated: 2017/12/18 16:40:17 by tperraut         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

##########
# TARGET #
##########

NAMES = \
	ft_checker/checker \
	ft_push_swap/push_swap

#######
# LIB #
#######

LIB = libft/libft.a

############
# COMPILER #
############

CC = clang
CFLAGS = -O3 -Werror -Wall -Wextra

#########
# RULES #
#########

all: $(LIB) $(NAMES)

$(LIB):
	make -C $(@D)

$(NAMES):
	make -C $(@D)
	cp $@ $(@F)

clean: $(dir $(NAMES)) $(dir $(LIB))
	$(foreach d, $^, make clean -C $(d);)

fclean: $(dir $(NAMES)) $(dir $(LIB))
	$(foreach d, $^, make fclean -C $(d);)
	rm -f $(notdir $(NAMES))

re: fclean all

.PHONY: all clean fclean re $(LIB) $(NAMES)
