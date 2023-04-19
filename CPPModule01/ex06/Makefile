#target: dependencies
#	action

FLAGS = -Wall -Wextra -Werror #-fsanitize=address -std=c++98
FILES = main.cpp Harl.cpp
OBJS = $(FILES:.cpp=.o)
NAME = harlFilter

all : $(NAME)

$(NAME): $(OBJS)
	c++ $(FLAGS) $(FILES) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
