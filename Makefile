NAME = libftprintf.a

src = hello_world.c ft_puthex.c ft_putnbr.c ft_putstr.c ft_putchar.c\

OBJ = $(src:.c=.o)

CC = cc 
FLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -f 
HDR = ft_printf.h

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o : %.c $(HDR)
	$(CC) $(FLAGS) -c $< -o $@

all : $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all