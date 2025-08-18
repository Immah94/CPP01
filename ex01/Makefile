NAME = zombie

CFLAG = -Wall -Wextra -Werror -std=c++98

SRC = Zombie.cpp zombieHorde.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAG) $(OBJ) -o $(NAME)

%.o: %.cpp
	c++ $(FLAG) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all


