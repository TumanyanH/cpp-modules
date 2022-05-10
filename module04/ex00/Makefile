CC = c++
CC_FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = animals

FILENAME = main.cpp \
			Animal.cpp \
			Cat.cpp \
			Dog.cpp
			
OBJS = $(FILENAME:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CC_FLAGS) $(FILENAME) -o $(NAME)

clean : 
	rm $(OBJS)

fclean : clean
	rm $(NAME)

re : fclean all
