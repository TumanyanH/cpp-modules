NAME = crappy

FILENAME = main.cpp \
			Phonebook.cpp \
			Contact.cpp
OBJS = $(FILENAME:.cpp=.o)

CC = c++
CC_FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CC_FLAGS) $(FILENAME) -o $(NAME)

clean : 
	rm $(OBJS)

fclean : clean
	rm $(NAME)

re : fclean all

