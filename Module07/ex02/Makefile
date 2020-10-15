# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rvan-hou <rvan-hou@student.42.fr>            +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/22 17:36:10 by robijnvanho   #+#    #+#                  #
#    Updated: 2020/10/02 12:31:48 by rvan-hou      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = ex02

FLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

HDR = Array.hpp

SRC = main.cpp

all: $(NAME)

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ) $(HDR)
	@clang++ $(OBJ) -o $@

%.o: %.cpp %.hpp
	clang++ $(FLAGS) -o $@ -c $<

clean:

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all