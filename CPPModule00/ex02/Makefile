#target: dependencies
#	action

FLAGS = -Wall -Wextra -Werror -std=c++98
FILES = tests.cpp Account.cpp
OBJS = $(FILES:.cpp=.o)
NAME = account

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
