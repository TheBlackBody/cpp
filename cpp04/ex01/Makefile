# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/26 12:05:29 by sfernand          #+#    #+#              #
#    Updated: 2023/12/29 12:03:26 by sfernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	Brain

SRC =	./main.cpp \
		./Animal.cpp \
		./Dog.cpp \
		./Cat.cpp  \
		./WrongAnimal.cpp \
		./WrongCat.cpp \
		./Brain.cpp

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