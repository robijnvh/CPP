# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rvan-hou <rvan-hou@student.42.fr>            +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/28 09:51:10 by robijnvanho   #+#    #+#                  #
#    Updated: 2020/07/29 15:43:23 by rvan-hou      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRCS = megaphone.cpp

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@echo "creating executable"
	@clang++ $(FLAGS) -o $(NAME) $(SRCS)

clean:
	@rm -f $(NAME)
	@echo "removed all"

fclean: clean

re: fclean all