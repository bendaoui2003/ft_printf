NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS =  ft_print_string.c ft_print_char.c ft_print_integer.c \
ft_print_percent.c ft_print_unsigned_int.c ft_print_hex_big.c \
ft_print_hex_mini.c ft_print_address.c ft_handle_format.c ft_printf.c


OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o:%.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re