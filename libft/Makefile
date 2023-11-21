# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nranna <nranna@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/12 11:20:19 by nranna            #+#    #+#              #
#    Updated: 2023/11/21 17:49:36 by nranna           ###   ########.fr        #
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
ft_memchr.c ft_strlcat.c ft_memcmp.c\
ft_strchr.c ft_strrchr.c ft_striteri.c\
ft_strlcpy.c ft_strnstr.c ft_calloc.c\
ft_strdup.c ft_strmapi.c ft_substr.c\
ft_strjoin.c ft_strtrim.c ft_itoa.c\
ft_split.c

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
