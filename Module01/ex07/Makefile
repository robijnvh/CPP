# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvan-hou <rvan-hou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/29 13:38:35 by rvan-hou          #+#    #+#              #
#    Updated: 2020/08/03 11:29:55 by rvan-hou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

SRCS = replace.cpp

FLAGS = -Wall -Werror -Wextra

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