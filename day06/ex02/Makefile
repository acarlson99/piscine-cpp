CC = clang++
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror
DFLAGS = -std=c++98 -Wall -Wextra -g
FILES = main.cpp
NAME = test.out

all: $(NAME)

$(NAME):
	$(CC) $(CPPFLAGS) $(FILES) -o $(NAME)

clean:

fclean:
	rm -f $(NAME)

re: fclean all

j:
	$(CC) $(DFLAGS) $(FILES) -o $(NAME)
