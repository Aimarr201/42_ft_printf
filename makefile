NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

SRCS = ft_printf.c ft_printf_aux.c

OBJS = $(SRCS:.c=.o)

HEADERS = printf.h

all: $(NAME)

$(NAME): $(OBJS) $(HEADERS)
		ar rcs $(NAME) $(OBJS)

%.o: %.c $(HEADERS)
		$(CC) $(CFLAGS) -c $< -o $@

clean: 
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re