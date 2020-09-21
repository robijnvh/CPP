# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: robijnvanhouts <robijnvanhouts@student.      +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/21 12:26:21 by robijnvanho   #+#    #+#                  #
#    Updated: 2020/09/21 12:36:26 by robijnvanho   ########   odam.nl          #
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
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all