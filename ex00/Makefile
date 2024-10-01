# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/25 14:05:52 by ehedeman          #+#    #+#              #
#    Updated: 2024/10/01 12:07:28 by ehedeman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = main.cpp			\
		Animal.cpp		\
		Dog.cpp			\
		Cat.cpp			\
		WrongAnimal.cpp	\
		WrongCat.cpp

OBJS_DIR = objs/
OBJS = $(SRC:.cpp=.o)
OBJS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))
HEADERS = Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.cpp
CXX = c++
#cxx can be left undefined but then it uses g++ and not c++ as required by subject
RM = rm -rf
MKDIR = mkdir -p
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

NAME = Zoo

all: $(NAME)

$(NAME): $(OBJS_PREFIXED)
	$(CXX) $(CXXFLAGS) $(OBJS_PREFIXED) -o $(NAME)

$(OBJS_DIR)%.o : %.cpp $(HEADERS)
	$(MKDIR) $(OBJS_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

leaks: 
	valgrind --leak-check=full	\
         --show-leak-kinds=all ./$(NAME)
		 
.PHONY: all clean re fclean leaks