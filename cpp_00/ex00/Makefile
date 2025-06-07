# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/07 15:29:24 by mintan            #+#    #+#              #
#    Updated: 2025/06/07 17:17:23 by mintan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler + compile flags
CC = c++
CFLAGS = -Wall -Werror -Wextra
STDFLAG = -std=c++98

# Definitions
NAME = megaphone
SRCS = megaphone.cpp
OBJ = $(SRCS:.cpp=.o)

# Target to make using Make all
all: $(NAME) print_art

# Generate the mandatory programme by compiling the objects
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(STDFLAG) $(OBJ) -o $@

# Generate all the .o files from the .c files for the programme
%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

# Clear the build files
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

# Rule to rebuild the target
re:	fclean all

# Phony targets
.PHONY: all clean re fclean

print_art:
	@echo "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀"
	@echo "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠐⢌⠁⠢⢄⠀⠀⠀⠀"
	@echo "⠀⠀⠀⠀⠀⠀⠀⠀⢀⠔⠒⠠⠤⢀⣀⠀⠀⠀⠀⠀⠀⠑⢄⠀⠑⢄⠀⠀"
	@echo "⠀⠀⠀⠀⠀⠀⢀⠔⠁⠀⠀⠀⠀⠀⠀⠈⡡⠂⠀⠀⠀⠀⠈⢆⠀⠈⢂⠀"
	@echo "⠀⠀⠀⠀⢀⠔⠁⠀⠀⠀⠀⠀⠀⠀⡠⠊⠀⠀⠀⠀⠀⠀⠀⠈⡄⠀⠀⡆"
	@echo "⠀⠀⢀⠔⠁⠀⠀⠀⠀⠀⠀⠀⠀⢎⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⢠"
	@echo "⠀⠀⠣⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠑⢄⠀⠀⠀⠀⠀⠀⠀⠀⠇⠀⠀⠸"
	@echo "⠀⠀⠀⠈⠢⡀⠀⠀⡠⠊⠑⢄⠀⠀⠀⠀⠑⢄⠀⠀⠀⠀⠀⡜⠀⠀⢀⠇"
	@echo "⠀⠀⠀⠀⠀⠈⠢⠊⠀⠀⠀⠀⠑⢄⠀⠀⠀⠀⠑⢄⠀⡠⠊⠀⠀⠀⠌⠀"
	@echo "⠀⠀⠀⠀⢰⡉⢢⠤⠒⠂⠤⠄⣀⡀⠑⢄⠀⠀⠀⠀⠙⢄⠀⠀⡠⠊⠀⠀"
	@echo "⠀⠀⢀⠤⠊⠀⠀⠐⢮⠁⠢⢄⡀⠀⠀⠀⠑⢄⠀⠀⠀⠀⠑⢎⠀⠀⠀⠀"
	@echo "⢀⠔⠁⠀⠀⢀⠔⠉⠉⠀⠀⠀⠀⠉⠐⠒⠀⠀⠓⢄⠀⠀⠀⠀⠑⢄⠀⠀"
	@echo "⠸⡄⠀⠀⡠⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠑⢄⠀⠀⠀⠀⢑⡄"
	@echo "⠀⠈⠒⠊⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠑⢄⢀⠴⠃⠀"
	@echo "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⠀⠀⠀"
