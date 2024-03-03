# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/26 09:51:34 by sfernand          #+#    #+#              #
#    Updated: 2024/02/26 16:47:41 by sfernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  PmergeMe

SRC = ./main.cpp\
	  ./PmergeMe.cpp

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