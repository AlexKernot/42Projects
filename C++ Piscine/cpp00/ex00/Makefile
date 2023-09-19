NAME=megaphone
CPPFLAGS=-Wall -Wextra -Werror -Wpedantic -Wconversion -Wshadow -O2 -g

FILES=megaphone.cpp
BIN=$(FILES:%.cpp=%.o)

%.o: %.cpp
	g++ -c $(CPPFLAGS) $< -o $@

all: $(NAME)

$(NAME): $(BIN)
	g++ -fsanitize=address -fsanitize=undefined $(BIN) -o $(NAME)

clean:
	rm -f $(BIN)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all re fclean clean