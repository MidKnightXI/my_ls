##
## EPITECH PROJECT, 2019
## BOO_phoenix_d03_2019
## File description:
## Makefile
##

SRC	=	my_putchar.c	\
		my_putstr.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:		fclean all