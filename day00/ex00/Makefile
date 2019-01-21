#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acarlson <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/20 13:42:06 by acarlson          #+#    #+#              #
#    Updated: 2019/01/21 09:17:47 by acarlson         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = clang++
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror
FILES = megaphone
CPPFILES = $(addsuffix .cpp, $(FILES))
OFILES = $(addsuffix .o, $(FILES))
NAME = megaphone

all: $(NAME)

$(NAME):
	$(CC) $(CPPFLAGS) $(CPPFILES) -o $(OFILES) -c
	$(CC) $(CPPFLAGS) $(OFILES) -o $(NAME)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
