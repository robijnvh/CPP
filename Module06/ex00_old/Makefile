# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rvan-hou <rvan-hou@student.42.fr>            +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/21 12:26:21 by robijnvanho   #+#    #+#                  #
#    Updated: 2020/10/01 15:46:33 by rvan-hou      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = convert

HEADER =	ScalarConversion.hpp

FLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

SRC =	main.cpp \
		ScalarConversion.cpp

all: $(NAME)

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ) $(HEADER)
	@clang++ $(OBJ) -o $@

%.o: %.cpp %.hpp
	clang++ $(FLAGS) -o $@ -c $<

clean:

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all