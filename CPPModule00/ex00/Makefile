#target: dependencies
#	action

FLAGS = -Wall -Wextra -Werror
FILES = megaphone.cpp
OBJS = $(FILES:.c=.o)
NAME = megaphone

all : $(NAME)

$(NAME): $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all