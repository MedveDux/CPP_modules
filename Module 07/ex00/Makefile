.PHONY:		all clean fclean re

NAME	=	megaphone

CC		=	c++
SRC		=	megaphone.cpp
FLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -rf
OBJ 	=	$(patsubst %.cpp, %.o, $(SRC))



all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(FLAGS) $(OBJ) -o $(NAME)
			
%.o : %.cpp	Makefile
			$(CC) $(FLAGS)  -c $< -o $@

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all