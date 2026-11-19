NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

LIBC = ft_printf.c

SRCS = $(LIBC) $(ADDITIONAL) $(LIST)

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re