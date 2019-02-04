CC = clang++
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror
DFLAGS = -std=c++98 -Wall -Wextra -g -DDEBUG
SRCS = srcs/
OBJDIR = .obj/
INCLUDES = -I includes/
LIBS = -lncurses
FILES = main HnameUnameMod OSInfoMod DateTimeMod RAMMod CPUMod NetworkMod
CPPFILES = $(addsuffix .cpp, $(FILES))
OFILES = $(addprefix $(OBJDIR), $(addsuffix .o, $(FILES)))
DNAME = debug.out
NAME = ft_gkrellm

.PHONY: clean fclean re etags j debug dclean k

all: $(NAME)

$(NAME): $(OBJDIR) $(OFILES)
	$(CC) $(CPPFLAGS) $(INCLUDES) $(OFILES) $(LIBS) -o $(NAME)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

$(addprefix $(OBJDIR), %.o): $(addprefix $(SRCS), %.cpp)
	$(CC) $(CPPFLAGS) $(INCLUDES) -o $@ -c $<

$(OBJDIR):
	$(shell if [ ! -d $(OBJDIR) ]; then mkdir $(OBJDIR); fi)

etags:
	find . -type f -iname "*.[ch]" | etags -

j:
	$(CC) $(DFLAGS) $(INCLUDES) $(addprefix $(SRCS), $(CPPFILES)) $(LIBS) -o $(DNAME)

debug: j

dclean:
	rm -rf *.dSYM
	rm -f $(DNAME)

k: fclean dclean
	rmdir $(OBJDIR)
