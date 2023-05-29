#target: dependencies
#	action

CXX = c++
CPPFLAGS = -fsanitize=address -std=c++98
FILES = main.cpp BitcoinExchange.cpp
OBJS = $(FILES:.cpp=.o)
NAME = btc

all : $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

run: all clean
	./$(NAME)

re: fclean all
