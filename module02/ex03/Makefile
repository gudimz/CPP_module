.PHONY:		all re clean fclean debug

NAME = bsp

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror -I -std=c++98

FILES =  main.cpp Fixed.cpp Point.cpp bsp.cpp
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