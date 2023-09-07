CXX = c++
CFLAGS = -g -Wall -Wextra -Werror -std=c++98
NAME = Animal
SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongCat.cpp WrongAnimal.cpp Brain.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CFLAGS) $^ -o $(NAME)

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean $(NAME)

.PHONY: clean fclean re
