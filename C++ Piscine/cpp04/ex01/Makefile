NAME=a.out
FILES=main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
BIN=$(FILES:%.cpp=%.o)

CPP=c++
CPPFLAGS=-Wall -Wextra -Wpedantic -Werror -Wshadow -g -std=c++98
LDFLAGS=-fsanitize=address -fsanitize=undefined

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

.PHONEY: all clean $(NAME)