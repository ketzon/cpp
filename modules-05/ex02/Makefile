# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbesson <fbesson@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/11 14:37:18 by fbesson           #+#    #+#              #
#    Updated: 2024/04/22 17:47:38 by fbesson          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
CXX = c++
SRCS = Bureaucrat.cpp main.cpp AForm.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp
SHRUB = *_shrubbery
OBJS = $(SRCS:.cpp=.o)
CXXFLAGS = -Werror -Wall -Wextra -std=c++98 -g
.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@
all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
clean:
	rm -rf $(OBJS) $(SHRUB)
fclean: clean
	rm -rf $(NAME)
re: fclean all
