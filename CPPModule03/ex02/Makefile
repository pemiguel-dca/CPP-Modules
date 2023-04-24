#target: dependencies
#	action

CC = c++
FLAGS = -Wall -Wextra -Werror -fsanitize=address -std=c++98
FILES = main.cpp FragTrap.cpp ScavTrap.cpp ClapTrap.cpp
OBJS = $(FILES:.cpp=.o)
NAME = fragTrap

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
