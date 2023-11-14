# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nranna <nranna@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/12 11:20:19 by nranna            #+#    #+#              #
#    Updated: 2023/11/13 18:06:37 by nranna           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CCFLAGS = -Wall -Wextra -Werror
NAME = libft.a

SRC = ft_atoi.c ft_isalnum.c ft_isascii.c\
ft_isprint.c ft_memset.c ft_tolower.c\
ft_bzero.c ft_isalpha.c ft_isdigit.c\
ft_memcpy.c ft_strlen.c ft_toupper.c\
ft_memmove.c ft_strncmp.c ft_putstr_fd.c\
ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c\

INCLUDE = libft.h

OBJS = $(SRC:.c=.o)

all: $(NAME)

#DELETE THIS LATER \/
so:
	$(CC) -nostartfiles -fPIC $(CCFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

#until here. :)

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
