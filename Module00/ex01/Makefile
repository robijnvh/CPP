# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: robijnvanhouts <robijnvanhouts@student.      +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/28 09:41:23 by robijnvanho   #+#    #+#                  #
#    Updated: 2020/07/28 09:41:40 by robijnvanho   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRCS = main.cpp

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