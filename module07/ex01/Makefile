.PHONY:		all re clean fclean debug

NAME = iter

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror -I -std=c++98

FILES =  main.cpp
OBJS = $(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

debug: CXXFLAGS += -fsanitize=address -g
debug: all

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all