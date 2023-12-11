# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/06 12:57:41 by sfernand          #+#    #+#              #
#    Updated: 2023/12/07 04:01:28 by sfernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME =	BraiiiiiiinnnzzzZ

SRC =	./main.cpp \
		./newZombie.cpp \
		./randomChump.cpp \
		./Zombie.cpp

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
