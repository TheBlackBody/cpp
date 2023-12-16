# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/12 17:39:59 by sfernand          #+#    #+#              #
#    Updated: 2023/12/12 17:47:40 by sfernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	Harl

SRC =	./main.cpp \
		./Harl.cpp
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
