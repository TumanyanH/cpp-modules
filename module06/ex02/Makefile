CC = c++
CC_FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = ident

FILENAME = main.cpp \
			A.cpp \
			B.cpp \
			C.cpp
			
OBJS = $(FILENAME:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CC_FLAGS) $(FILENAME) -o $(NAME)

clean : 
	rm $(OBJS)

fclean : clean
	rm $(NAME)

re : fclean all
