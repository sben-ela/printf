NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror

SOURCES = ft_putchar.c ft_convert_p.c ft_printf.c ft_puthexa.c ft_putunsig.c \
ft_putnbr.c  ft_putstr.c\

OBJECTS = $(SOURCES:.c=.o)

all : $(NAME)

$(NAME) : $(OBJECTS)
	ar -rc $(NAME) $(OBJECTS)

clean :
	rm -f $(OBJECTS)

fclean : clean
	rm -f $(NAME)
re : fclean all