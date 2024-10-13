# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: awolschi <awolschi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/11 17:21:44 by awolschi          #+#    #+#              #
#    Updated: 2024/10/11 17:37:19 by awolschi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isalnum.c \
	   ft_isalpha.c \
	   ft_isascii.c \
	   ft_isdigit.c \
	   ft_isprint.c \
	   ft_memset.c \
	   ft_strchr.c \
	   ft_strlen.c \
	   ft_strncmp.c \
	   ft_strrchr.c \
	   ft_tolower.c \
	   ft_toupper.c \

OFILES = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OFILES)
	ar rc $(NAME) $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re