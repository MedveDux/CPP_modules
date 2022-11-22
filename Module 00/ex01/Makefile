.PHONY:		all clean fclean re

NAME	=	phonebook

CC		=	c++
SRC		=	main.cpp Contact.cpp PhoneBook.cpp
HEADERS	= 	Contact.hpp PhoneBook.hpp
FLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -rf
OBJ 	=	$(patsubst %.cpp, %.o, $(SRC))



all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(FLAGS) $(OBJ) -o $(NAME)
			
%.o : %.cpp	Makefile $(HEADERS)
			$(CC) $(FLAGS)  -c $< -o $@

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all