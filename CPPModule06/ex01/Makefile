#target: dependencies
#	action

CPP = c++
CPPFLAGS = -fsanitize=address -std=c++98
FILES = main.cpp Data.cpp Serialization.cpp
OBJS = $(FILES:.cpp=.o)
NAME = serializer

all : $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all