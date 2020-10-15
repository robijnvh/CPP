# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rvan-hou <rvan-hou@student.42.fr>            +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/21 15:05:02 by robijnvanho   #+#    #+#                  #
#    Updated: 2020/09/29 12:41:18 by rvan-hou      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = ex01

FLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

SRC = iter.cpp

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