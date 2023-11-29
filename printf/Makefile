# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nranna <nranna@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 12:06:45 by nranna            #+#    #+#              #
#    Updated: 2023/11/29 12:57:25 by nranna           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CCFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

SRC = ft_printf.c ft_putstr_fd.c ft_strlen.c #here we put our files

INCLUDE = ft_libprint.h #here we make our new library to use on printf

OBJS = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c $(INCLUDE)
	@$(CC) $(CCFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	@ar -rcs $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
