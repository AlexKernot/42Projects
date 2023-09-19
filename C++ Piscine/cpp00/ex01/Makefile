NAME=phonebook
FILES=Contact.cpp main.cpp PhoneBook.cpp
BIN=$(FILES:%.cpp=%.o)

CPP=g++
CPPFLAGS=-Wall -Wextra -Wpedantic -g -std=c++98
LDFLAGS=-fsanitize=address -fsanitize=undefined

%.o : %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(BIN)
	$(CPP) $(LDFLAGS) $(BIN) -o phonebook

clean:
	rm -f $(BIN)
fclean: clean
	rm -f $(NAME)

.PHONEY: all clean fclean