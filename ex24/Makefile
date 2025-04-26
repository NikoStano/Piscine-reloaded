# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nistanoj <nistanoj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/24 13:42:38 by nistanoj          #+#    #+#              #
#    Updated: 2025/04/26 16:44:58 by nistanoj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
HEADER		=	includes/

CC			=	cc
CFLAGS		=	-Wall -Werror -Wextra -I$(HEADER)
COMPILE		=	$(CC) $(CFLAGS)

SRCS		=	srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
				srcs/ft_strlen.c srcs/ft_swap.c
				
OBJS		=	$(SRCS:.c=.o)
	
all:			$(NAME)

$(NAME):		$(OBJS)
	@ar -rc $@ $^
	@ranlib $@

%.o:			%.c
	${COMPILE} -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean:			clean
	@rm -f $(NAME)

re:				fclean all

.PHONY		: all clean fclean re
