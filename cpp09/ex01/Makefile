# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/21 11:01:51 by sfernand          #+#    #+#              #
#    Updated: 2024/02/22 13:39:00 by sfernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  RPN

SRC = ./main.cpp \
	  ./RPN.cpp

CC = c++

FLAGS = -std=c++98 -Wall -Wextra -Werror

OBJS = $(SRC:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $^ -o $(NAME)

all: $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re