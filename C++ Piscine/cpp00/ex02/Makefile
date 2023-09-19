NAME=tests
FILES=Account.cpp tests.cpp
BIN=$(FILES:%.cpp=%.o)

CPP=g++
CPPFLAGS=-Wall -Wextra -Wpedantic -g -std=c++98
LDFLAGS=-fsanitize=address -fsanitize=undefined

%.o : %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(BIN)
	$(CPP) $(LDFLAGS) $(BIN) -o tests
	./tests | sed -e 's/\[[^][]*]//g' | awk '{$$1=$$1};1' > output
	diff minimal_log output

clean:
	rm -f $(BIN)
fclean: clean
	rm -f $(NAME) output

.PHONEY: all clean $(NAME)