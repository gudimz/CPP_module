.PHONY:		all re clean fclean debug

NAME = materia

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -I -std=c++98

FILES =  main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp
OBJS = $(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

debug: CXXFLAGS += -fsanitize=address -g
debug: all

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f ${NAME}

re: fclean all