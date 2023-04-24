#target: dependencies
#	action

CC = c++
FLAGS = -Wall -Wextra -Werror -fsanitize=address -std=c++98
FILES = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
OBJS = $(FILES:.cpp=.o)
NAME = animal

all : $(NAME)

$(NAME): $(OBJS)
	c++ $(FLAGS) $(FILES) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

run: all clean
	./$(NAME)

re: fclean all
