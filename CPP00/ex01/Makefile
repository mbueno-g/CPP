# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbueno-g <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/09 14:49:55 by mbueno-g          #+#    #+#              #
#    Updated: 2022/06/09 14:50:00 by mbueno-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CPP = clang++
CFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -f 

SRC_M = main.cpp contact.cpp phonebook.cpp

OBJ_M = $(SRC_M:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ_M) 
		$(CPP) $(CFLAGS) $(OBJ_M) -o $@

$(OBJ_M): $(SRC_M)
		$(CPP) $(CFLAGS) -c $^

clean:
		$(RM) $(OBJ_M)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
