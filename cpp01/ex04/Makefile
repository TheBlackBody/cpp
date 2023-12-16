# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/08 13:19:28 by sfernand          #+#    #+#              #
#    Updated: 2023/12/11 18:03:31 by sfernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	Replace

SRC =	./main.cpp \
		./replace.cpp
CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

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
