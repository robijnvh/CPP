# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvan-hou <rvan-hou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/29 14:31:44 by wbarendr          #+#    #+#              #
#    Updated: 2020/09/29 11:20:09 by rvan-hou      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = replace

SRCS = replace.cpp

FLAGS = -Wall -Werror -Wextra -pedantic -std=c++98

all: $(NAME)

$(NAME):
	@echo "making executable"
	@clang++ $(FLAGS) -o $(NAME) $(SRCS)

clean:
	@rm -f $(NAME)
	@echo "removed executable"

fclean: clean
	@rm -f new_text.txt
	@echo "removed new created file, if existed"
	
re: fclean all
	

test: all
	./$(NAME) text.txt World "Amsterdam !"