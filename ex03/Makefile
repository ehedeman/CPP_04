# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehedeman <ehedeman@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/25 14:05:52 by ehedeman          #+#    #+#              #
#    Updated: 2024/09/30 12:53:24 by ehedeman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = main.cpp				\
		AMateria.cpp		\
		Character.cpp		\
		Cure.cpp			\
		Ice.cpp				\
		MateriaSource.cpp

OBJS_DIR = objs/
OBJS = $(SRC:.cpp=.o)
OBJS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))
HEADERS = /includes
CXX = c++
#cxx can be left undefined but then it uses g++ and not c++ as required by subject
RM = rm -rf
MKDIR = mkdir -p
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

NAME = Materia

all: $(NAME)

$(NAME): $(OBJS_PREFIXED)
	$(CXX) $(CXXFLAGS) $(OBJS_PREFIXED) -o $(NAME)

$(OBJS_DIR)%.o : %.cpp
	$(MKDIR) $(OBJS_DIR)
	$(CXX) $(CXXFLAGS) -I$(HEADERS) -c $< -o $@

clean:
	$(RM) $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

leaks: 
	valgrind --leak-check=full	\
         --show-leak-kinds=all ./$(NAME)
		 
.PHONY: all clean re fclean leaks