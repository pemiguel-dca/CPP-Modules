#target: dependencies
#	action

CXX = c++
CPPFLAGS = -fsanitize=address -std=c++98
FILES = main.cpp Base.cpp
OBJS = $(FILES:.cpp=.o)
NAME = identify

all : $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
