# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mboturch <mboturch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/21 14:41:23 by mboturch          #+#    #+#              #
#    Updated: 2019/11/21 14:41:24 by mboturch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRCS =	build_board.c \
	build_piece.c \
	exfree.c \
	fillit.c \
	find_spot.c \
	linked_list.c \
	place_remove.c \
	read.c \
	setup.c \

OBJS = $(SRCS:.c=.o)

INCL = fillit.h

LIBFT = libft/

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	make -C $(LIBFT)
	@gcc $(FLAGS) -o $(NAME) $(SRCS) -I ./libft/ -L. libft/libft.a
clean:
	@rm -rf $(OBJS)
	make clean -C $(LIBFT)
fclean: clean
	/bin/rm -f $(NAME)
	make fclean -C $(LIBFT)
re: fclean all

.PHONY: re fclean clean all
