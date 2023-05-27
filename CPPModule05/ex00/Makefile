#target: dependencies
#	action

CXX = c++
FLAGS = -Wall -Wextra -Werror -fsanitize=address -std=c++98
FILES = main.cpp Bureaucrat.cpp
OBJS = $(FILES:.cpp=.o)
NAME = bureaucrat

all : $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(FLAGS) $(FILES) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

run: all clean
	./$(NAME)

re: fclean all
