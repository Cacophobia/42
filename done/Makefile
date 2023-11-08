# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nranna <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/18 12:19:00 by nranna            #+#    #+#              #
#    Updated: 2023/11/01 15:59:54 by nranna           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CCFLAGS = -Wall -Wextra -Werror
NAME = libft.a

SRC = ft_atoi.c ft_isdigit.c ft_strlen.c
INCLUDE = libft.h

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
