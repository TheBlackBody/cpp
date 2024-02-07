# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfernand <sfernand@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/16 14:29:10 by sfernand          #+#    #+#              #
#    Updated: 2024/02/05 19:05:01 by sfernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	SpecialForm

SRC =	./Bureaucrat.cpp \
		./Form.cpp \
		./PresidentialPardonForm.cpp \
		./ShrubberyCreationForm.cpp \
		./RobotomyRequestForm.cpp  \
		./main.cpp 

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