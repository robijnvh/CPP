# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvan-hou <rvan-hou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/21 14:23:47 by robijnvanho       #+#    #+#              #
#    Updated: 2020/09/29 12:39:11 by rvan-hou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = identifyType

FLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

HDR = A.hpp B.hpp C.hpp Base.hpp

SRC = main.cpp A.cpp B.cpp C.cpp Base.cpp

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