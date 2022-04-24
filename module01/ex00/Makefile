CC = c++
CC_FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = brainz

FILENAME = main.cpp \
			Zombie.cpp \
			newZombie.cpp \
			randomChump.cpp 
			
OBJS = $(FILENAME:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CC_FLAGS) $(FILENAME) -o $(NAME)

clean : 
	rm $(OBJS)

fclean : clean
	rm $(NAME)

re : fclean all

