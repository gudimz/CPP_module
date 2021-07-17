.PHONY:		all re clean fclean

NAME = phonebook

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror -I ./includes -std=c++98

FILES = $(addprefix ./src/, main.cpp PhoneBook.cpp Contact.cpp)
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