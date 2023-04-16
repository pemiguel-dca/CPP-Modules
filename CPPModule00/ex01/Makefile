#target: dependencies
#	action

FLAGS = -Wall -Wextra -Werror -std=c++98
FILES = main.cpp contact.cpp phonebook.cpp
OBJS = $(FILES:.cpp=.o)
NAME = gpo

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
