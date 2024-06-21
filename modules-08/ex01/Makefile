# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/06 13:10:22 by fbesson           #+#    #+#              #
#    Updated: 2024/06/06 13:32:25 by fbesson          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
CXX = c++
SRCS = main.cpp Span.cpp
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
