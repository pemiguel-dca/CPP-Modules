#target: dependencies
#	action

FLAGS = -Wall -Wextra -Werror -fsanitize=address -std=c++98
FILES = main.cpp
OBJS = $(FILES:.cpp=.o)
NAME = replace

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
