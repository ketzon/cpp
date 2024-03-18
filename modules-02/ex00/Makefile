# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/10 12:44:27 by fbesson           #+#    #+#              #
#    Updated: 2024/03/10 12:44:33 by fbesson          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -g -std=c++98
NAME = Fixed
SRCS = main.cpp Fixed.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS) 

fclean : clean
	rm -rf $(NAME)

re : fclean all

