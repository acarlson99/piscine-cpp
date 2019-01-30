CC = clang++
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror
FILES = whatever.cpp
NAME = test.out

all: $(NAME)

$(NAME):
	$(CC) $(CPPFLAGS) $(FILES) -o $(NAME)

clean:

fclean:
	rm -f $(NAME)

re: fclean all
