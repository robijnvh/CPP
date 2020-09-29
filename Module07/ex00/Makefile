# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rvan-hou <rvan-hou@student.42.fr>            +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/21 14:43:37 by robijnvanho   #+#    #+#                  #
#    Updated: 2020/09/23 15:51:38 by rvan-hou      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = ex00

FLAGS = -Wall -Wextra -Werror

SRC = whatever.cpp

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