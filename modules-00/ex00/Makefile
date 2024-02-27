NAME = megaphone
CC = c++
FLAGS = -Wall -Werror -Wextra -g -std=c++98
SRCS = megaphone.cpp
SRCS_OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(SRCS_OBJS)
	$(CC) $(FLAGS) $(SRCS_OBJS) -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME) 

re: fclean all

