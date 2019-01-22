#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acarlson <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/22 08:11:58 by acarlson          #+#    #+#              #
#    Updated: 2019/01/22 08:22:22 by acarlson         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = clang++
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror
DFLAGS = -std=c++98 -Wall -Wextra -Werror
FILES = main Pony.class
CPPFILES = $(addsuffix .cpp, $(FILES))
OFILES = $(addsuffix .o, $(FILES))
INCLUDES = -I ./
NAME = test.out

all: $(NAME)

$(NAME):
	$(CC) $(CPPFLAGS) $(CPPFILES) -c
	$(CC) $(CPPFLAGS) $(OFILES) -o $(NAME)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

j:
	$(CC) $(DFLAGS) $(CPPFILES) -c
	$(CC) $(DFLAGS) $(OFILES) -o $(NAME)

k: fclean
	rm -rf *.dSYM/
