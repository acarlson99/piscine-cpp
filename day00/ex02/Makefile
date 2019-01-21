#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acarlson <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/21 08:53:39 by acarlson          #+#    #+#              #
#    Updated: 2019/01/21 09:20:33 by acarlson         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = clang++
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror
FILES = Account.class ressources/tests
CPPFILES = $(addsuffix .cpp, $(FILES))
INCLUDES = -I ressources/
NAME = test.out

all: $(NAME)

$(NAME):
	$(CC) $(CPPFLAGS) $(INCLUDES) $(CPPFILES) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
