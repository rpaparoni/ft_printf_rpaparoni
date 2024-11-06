NAME = libftprintf.a
SOURCES = ft_printf.c ft_printhex.c \
ft_printid.c ft_printp.c ft_printu.c \
ft_putchar_fd.c ft_putnbr_fd.c

OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

all: $(NAME)

$(NAME) : $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)


re: fclean all

.PHONY: all clean fclean re
