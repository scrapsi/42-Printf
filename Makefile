# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/24 09:50:06 by baantoin          #+#    #+#              #
#    Updated: 2026/11/24 11:22:23 by baantoin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I header

LOGIC_SRCS = logic/ft_printf.c \
             logic/ft_parse.c \
             logic/ft_conversion.c

UTILS_SRCS = utils/ft_is_valid_conversion.c \
             utils/ft_has_percent.c \
             utils/ft_putchar.c \
             utils/ft_putstr.c \
             utils/ft_putnbr.c \
             utils/ft_putptr.c \
             utils/ft_strlen.c

LOGIC_OBJS = $(LOGIC_SRCS:.c=.o)
UTILS_OBJS = $(UTILS_SRCS:.c=.o)
OBJS = $(LOGIC_OBJS) $(UTILS_OBJS)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c header/ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
