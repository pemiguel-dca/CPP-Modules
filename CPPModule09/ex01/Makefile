#target: dependencies
#	action

CXX = c++
CPPFLAGS = -fsanitize=address -std=c++98
FILES = main.cpp RPN.cpp
OBJS = $(FILES:.cpp=.o)
NAME = RPN

all : $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

run: all clean
	./$(NAME) "8 9 * 9 - 9 - 9 - 4 - 1 +"

re: fclean all
