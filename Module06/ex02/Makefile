# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: robijnvanhouts <robijnvanhouts@student.      +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/21 14:23:47 by robijnvanho   #+#    #+#                  #
#    Updated: 2020/09/21 14:32:24 by robijnvanho   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = identifyType

FLAGS = -Wall -Wextra -Werror

HDR = A.hpp B.hpp C.hpp Base.hpp

SRC = main.cpp A.cpp B.cpp C.cpp Base.cpp

all: $(NAME)

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ) $(HDR)
	@clang++ $(OBJ) -o $@

%.o: %.cpp %.hpp
	clang++ $(FLAGS) -o $@ -c $<

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all