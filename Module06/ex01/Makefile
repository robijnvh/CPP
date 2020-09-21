# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: robijnvanhouts <robijnvanhouts@student.      +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/21 13:02:53 by robijnvanho   #+#    #+#                  #
#    Updated: 2020/09/21 13:03:46 by robijnvanho   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = serialization

FLAGS = -Wall -Wextra -Werror

SRC = main.cpp

all: $(NAME)

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	@clang++ $(OBJ) -o $@

%.o: %.cpp %.hpp
	clang++ $(FLAGS) -o $@ -c $<

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all