# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rvan-hou <rvan-hou@student.42.fr>            +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/21 13:02:53 by robijnvanho   #+#    #+#                  #
#    Updated: 2020/09/29 12:38:27 by rvan-hou      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = serialization

FLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

SRC = main.cpp

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