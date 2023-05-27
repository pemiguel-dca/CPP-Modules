#target: dependencies
#	action

CXX = c++
CPPFLAGS = -fsanitize=address -std=c++98
FILES = main.cpp ScalarConverter.cpp Identify.cpp Sto.cpp
OBJS = $(FILES:.cpp=.o)
NAME = scalarConverter

all : $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) $(FILES) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
