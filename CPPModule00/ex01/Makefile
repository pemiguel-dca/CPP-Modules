#target: dependencies
#	action

FLAGS = -Wall -Wextra -Werror
FILES = main.cpp contact.cpp #phonebook.cpp
OBJS = $(FILES:.c=.o)
NAME = phonebook

all : $(NAME)

$(NAME): $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
