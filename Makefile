# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cwon <cwon@student.42bangkok.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/03 16:52:39 by cwon              #+#    #+#              #
#    Updated: 2024/09/06 02:05:18 by cwon             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# c files to compile
CFILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		 ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		 ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
		 ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		 ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strtrim.c \
		 ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
		 ft_putstr_fd.c ft_putendl_fd.c

# object files
# variable declaration with substitution
# CFILES will be the c files with extension changed to .o
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

# flags:
# r for inserting files into archive,
# c for creating archive,
# s for indexing the files in the archive
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