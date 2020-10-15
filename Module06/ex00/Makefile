# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rvan-hou <rvan-hou@student.42.fr>            +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/15 10:44:23 by rvan-hou      #+#    #+#                  #
#    Updated: 2020/10/15 10:44:40 by rvan-hou      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = convert

FLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

SRC =	main.cpp

all: $(NAME)

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	@clang++ $(OBJ) -o $@

%.o: %.cpp %.hpp
	clang++ $(FLAGS) -o $@ -c $<

clean:

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all