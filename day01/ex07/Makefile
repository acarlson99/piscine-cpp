#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acarlson <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/22 18:42:01 by acarlson          #+#    #+#              #
#    Updated: 2019/01/22 19:05:20 by acarlson         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = clang++
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror
FILES = main
CPPFILES = $(addsuffix .cpp, $(FILES))
OFILES = $(addsuffix .o, $(FILES))
INCLUDES = -I ./
NAME = replace

all: $(NAME)

$(NAME):
	$(CC) $(CPPFLAGS) $(INCLUDES) $(CPPFILES) -c
	$(CC) $(CPPFLAGS) $(INCLUDES) $(OFILES) -o $(NAME)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

debug:
	$(CC) -Wall -Wextra -g $(INCLUDES) $(CPPFILES) -o d_phonebook

j: debug

k: fclean
	rm -rf *.dSYM
