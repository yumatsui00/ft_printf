SRCS =	ft_printf.c ft_10to16_pf.c ft_put_u_nbr_pf.c		\
		ft_put_address_pf.c ft_putchar_pf.c ft_putnbr_pf.c	\
		ft_putstr_pf.c show_error_pf.c \


NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJC = $(SRCS:.c=.o)
RM = rm -f
AR = ar rc

all: $(NAME)

$(NAME): $(OBJC)
	$(AR) $@ $^
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJC) $(OBJCB)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
