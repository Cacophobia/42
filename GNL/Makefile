# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nranna <nranna@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 12:06:45 by nranna            #+#    #+#              #
#    Updated: 2024/01/10 21:05:20 by nranna           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CCFLAGS = -Wall -Wextra -Werror
NAME = get_next_line.a

SRC = ft_printf.c ft_putstr.c ft_putchar.c ft_putnbr.c

INCLUDE = ft_printf.h

OBJS = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c $(INCLUDE)
	@echo ">Compiling $<..."
	@$(CC) $(CCFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	@echo ">Creating library $(NAME)"
	@ar -rcs $(NAME) $(OBJS)
	@echo "\n$(NAME) Created sucessfully. :)"

clean:
	@echo ">Cleaning object files..."
	@rm -f $(OBJS)

fclean: clean
	@echo ">Cleaning $(NAME)..."
	@rm -f $(NAME)
	@echo "\nDone. :)"

re: fclean all

.PHONY: all clean fclean re
