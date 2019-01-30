CC = clang++
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror
FILES = main.cpp
NAME = convert

all: $(NAME)

$(NAME):
	$(CC) $(CPPFLAGS) $(FILES) -o $(NAME)

clean:

fclean:
	rm -f $(NAME)

re: fclean all
