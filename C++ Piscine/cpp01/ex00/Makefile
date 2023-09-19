NAME=a.out
FILES=newZombie.cpp main.cpp randomChump.cpp Zombie.cpp
BIN=$(FILES:%.cpp=%.o)

CPP=g++
CPPFLAGS=-Wall -Wextra -Wpedantic -g -std=c++98
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

.PHONEY: all clean $(NAME)