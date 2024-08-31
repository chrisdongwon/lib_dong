# c files to compile
CFILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c

# object files
# variable declaration with substitution - SRCS will be the c files with extension changed to .o
OFILES = $(CFILES:.c=.o)

# compiler
CC = cc

# compile flags
CFLAGS = -Wall -Wextra -Werror

# output name
# library extension: .lib for Windows, .a or .so for Unix
NAME = libft.a

# target all
# if library exists, clean first
# else, compile then build library using ar command
all: $(NAME) clean

# use cc to compile c files and the object files.
# % wildcard for pattern matching, * wildcard for name matching from shell
# $< for first prerequisite, meaning c files in this case
# $@ for the target name, so obj files in this case
%.o: %.c libft.h Makefile
	$(CC) $(CFLAGS) -c $< -o $@

# flags: r for inserting files into archive, c for creating archive, s for indexing the files in the archive
$(NAME): $(OFILES)
	ar -rcs $(NAME) $(OFILES)

# clean will remove object files
clean:
	rm -f $(OFILES)

# fclean will remove object and c files
fclean: clean 
	rm -f $(NAME)

# re for rebuild
re: fclean $(NAME)

# if a target name happens to match a file name in the directory,
# it removes so that the targets are interpreted correctly in the makefile
.PHONY: all clean fclean re