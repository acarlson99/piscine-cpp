#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acarlson <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/21 08:53:39 by acarlson          #+#    #+#              #
#    Updated: 2019/01/21 16:12:28 by acarlson         ###   ########.fr        #
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

k: fclean
	rm -rf *.dSYM
	rm -f *.out

j:
	$(CC) $(CPPFLAGS) -g $(INCLUDES) $(CPPFILES) -o $(NAME)

diff: j
	bash diff.sh
