NAME=a.out
FILES=Bureaucrat.cpp main.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
BIN=$(FILES:%.cpp=%.o)

CPP=clang++
CPPFLAGS=-Wall -Wextra -Werror -Wpedantic -g -std=c++98
#LDFLAGS=-fsanitize=address -fsanitize=undefined

%.o : %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(BIN)
	$(CPP) $(LDFLAGS) $(BIN) -o $(NAME)

clean:
	rm -f $(BIN)
fclean: clean
	rm -f $(NAME) output

re: fclean $(NAME)

.PHONEY: all clean