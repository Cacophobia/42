# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nranna <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/18 12:19:00 by nranna            #+#    #+#              #
#    Updated: 2023/11/01 13:37:08 by nranna           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CCFLAGS = -Wall -Wextra -Werror
NAME = libft.a

TARGET = libft.a
SRC = ft_atoi.c ft_isdigit.c ft_strlen.c
INCLUDE = libft.h

#OBJS are my object files.
OBJS = $(SRC:.c=.o)

#all only runs if there's NAME but if something in SRC or INCLUDE changes he runs anyways.
all: $(NAME)

$(NAME): $(SRC) $(INCLUDE)
	$(CC) $(CCFLAGS) -o $(TARGET) $(SRC)
