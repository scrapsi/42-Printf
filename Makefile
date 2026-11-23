NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = logic/ft_printf.c logic/ft_parse.c logic/ft_conversion.c \
       utils/ft_check_format.c utils/ft_has_format.c \
       utils/ft_hex_type.c utils/ft_putchar_len.c \
       utils/ft_putnbr_type.c utils/ft_putstr_len.c


OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re