# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nistanoj <nistanoj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/25 13:30:43 by nistanoj          #+#    #+#              #
#    Updated: 2025/04/25 14:17:45 by nistanoj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ft_display_file

CC			=	cc
CFLAGS		=	-Wall -Werror -Wextra
COMPILE		=	$(CC) $(CFLAGS)

SRCS		=	ft_display_file.c
OBJ			=	$(SRCS:.c=.o)

all		:	$(NAME) clean

$(NAME)	:	$(OBJ)
	$(COMPILE) -o $(NAME) $(OBJ)

%.o		:	%.c
	$(COMPILE) -c $(SRCS) -o $(OBJ)

clean	:
	@rm -f $(OBJ)

fclean	:	clean
	@rm -f $(NAME)

.PHONY	:	all clean fclean
