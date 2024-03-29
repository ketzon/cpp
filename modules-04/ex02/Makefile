NAME = a.out
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -g -std=c++98
RM = rm -rf
SRCS = main.cpp Cat.cpp Dog.cpp Animal.cpp Brain.cpp
OBJS = $(SRCS:.cpp=.o)
.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@
all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all
