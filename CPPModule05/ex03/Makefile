#target: dependencies
#	action

CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -fsanitize=address -std=c++98
FILES = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp Intern.cpp
OBJS = $(FILES:.cpp=.o)
NAME = intern

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
