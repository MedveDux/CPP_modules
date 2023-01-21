.PHONY	:	all clean fclean re

NAME	=	dreams

CC		=	c++

FLAGS	=	-Wall -Wextra -Werror  -std=c++98

HEADERS =	Account.hpp \

SRC		=	tests.cpp \
			Account.cpp \

OBJS		=	$(patsubst %.cpp, %.o, $(SRC))

all		:	$(NAME)

$(NAME)	:	$(OBJS)
				$(CC) $(FLAGS) $(OBJS) -o $@

%.o		:	%.cpp $(HEADERS)
				$(CC) $(FLAGS) -c $< -o $@

clean	:
				rm -rf $(OBJS)

fclean	:	clean
				rm -rf $(NAME)

re		:	fclean	all