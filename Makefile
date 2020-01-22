##
## EPITECH PROJECT, 2019
## BOO_phoenix_d04_2019
## File description:
## Makefile
##

SRC	=	scan.c	\
		main.c	\

NAME	=	my_ls

all:	$(NAME)

$(NAME):	$(SRC)
		make -C ./lib
		gcc -o $(NAME) $(SRC) -L./lib -lmy

clean:
		rm -f $(NAME)

fclean:	clean
		make fclean -C ./lib
		rm -f vgcore.*
		rm -f $(NAME)

re:		fclean all