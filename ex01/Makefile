#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acarlson <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/20 15:24:00 by acarlson          #+#    #+#              #
#    Updated: 2019/01/20 21:46:11 by john             ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = clang++
CPPFLAGS = -Wall -Wextra -Werror
FILES = Phonebook main
CPPFILES = $(addsuffix .cpp, $(FILES))
OFILES = $(addsuffix .o, $(FILES))
INCLUDES = -I ./
NAME = phonebook

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
