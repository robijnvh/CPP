# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rvan-hou <rvan-hou@student.42.fr>            +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/21 12:26:21 by robijnvanho   #+#    #+#                  #
#    Updated: 2020/09/23 15:41:54 by rvan-hou      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = convert

HEADER =	utils.hpp \
			ScalarConversion.hpp

FLAGS = -Wall -Wextra -Werror

SRC =	utils.cpp \
		main.cpp \
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