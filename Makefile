##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile for SoloStumper05
##

.PHONY: all clean fclean re

SRC_FOLDER			=	src
CFLAGS				=	-g3 -I ./headers/

MAKEFLAGS			=	--silent
EXECUTABLE_NAME		=	rostring

SRC					=		$(SRC_FOLDER)/main.c			\
							$(SRC_FOLDER)/str_funs.c		\
							$(SRC_FOLDER)/idioms.c			\
							$(SRC_FOLDER)/sanitizing.c

OBJ					=	$(SRC:.c=.o)

all:	$(OBJ)
		@gcc -o $(EXECUTABLE_NAME) $(OBJ)

clean:
		@rm -f $(OBJ)

fclean: clean
		@rm -rf $(EXECUTABLE_NAME)

re:	fclean all
