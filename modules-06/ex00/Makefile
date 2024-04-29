NAME = a.out
CXX = c++
SRCS = ScalarConverter.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)
CXXFLAGS = -Werror -Wall -Wextra -std=c++98 -g
.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@
all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
clean:
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)
re: fclean all
