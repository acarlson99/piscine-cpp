#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acarlson <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/23 18:37:47 by acarlson          #+#    #+#              #
#    Updated: 2019/01/23 18:38:42 by acarlson         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = clang++
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror
DFLAGS = -std=c++98 -Wall -Wextra -Werror
FILES = main Fixed
CPPFILES = $(addsuffix .cpp, $(FILES))
OFILES = $(addsuffix .o, $(FILES))
INCLUDES = -I ./
NAME = eval_expr

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
