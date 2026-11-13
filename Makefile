NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_puthex.c \
	ft_putadress.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) ft_printf.h
	ar rcs $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all tester clean fclean re
