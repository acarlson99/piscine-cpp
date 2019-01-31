CC = clang++
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror
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
	$(CC) $(CPPFLAGS) $(FILES) -o $(NAME)
