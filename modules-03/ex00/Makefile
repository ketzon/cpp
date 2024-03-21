CXX= c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g
SRCS = main.cpp ClapTrap.cpp
OBJS = ${SRCS:.cpp=.o}
RM = rm -f
NAME = a.out

all : $(NAME)

$(NAME) : ${OBJS}
		${CXX} ${CXXFLAGS} ${OBJS} -o $(NAME)

.cpp.o:
		${CXX} ${CXXFLAGS} -c $< -o $@

clean :
		${RM} ${OBJS}

fclean : clean
		${RM} $(NAME)
re : 
	${MAKE} fclean 
	${MAKE} all
