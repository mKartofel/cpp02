# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/27 19:25:15 by vfiszbin          #+#    #+#              #
#    Updated: 2022/07/28 10:55:42 by vfiszbin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00

SRCS =	main.cpp\
		Fixed.cpp\

OBJS = ${SRCS:.cpp=.o}

INCLUDES = Fixed.hpp\

CC = c++

RM = rm -f

FLAGS = -Wall -Wextra -Werror -std=c++98

.cpp.o:
	${CC} ${FLAGS} -c $ $< -o ${<:.cpp=.o}

all: ${NAME}

${NAME} : ${INCLUDES} ${OBJS}
	
	${CC} ${FLAGS} ${OBJS} -o ${NAME}

clean:
	${RM} *.o

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re