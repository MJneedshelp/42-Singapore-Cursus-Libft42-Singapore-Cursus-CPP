# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mintan <mintan@stuident.42singapore.sg>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/16 13:18:32 by mintan            #+#    #+#              #
#    Updated: 2025/06/17 17:18:31 by mintan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler + compile flags + dependency flags
CC = c++
C_FLAGS = -Wall -Werror -Wextra
STD_FLAG = -std=c++98
DEP_FLAGS = -MMD -MP

# Target Executable
NAME = karen

# Source, Object and Dependency (headers) files
SRC_NAMES = main Harl
SRCS = $(addsuffix .cpp, $(SRC_NAMES))
OBJ = $(SRCS:.cpp=.o)
DEP = $(OBJ:.o=.d)

# Target to make using Make all
all: $(NAME) print_art

# Generate the mandatory programme by compiling the objects + track header
# dependencies
$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $@

-include $(DEP)

# Generate all the .o files from the .c files for the programme
%.o: %.cpp
	$(CC) $(C_FLAGS) $(STD_FLAG) $(DEP_FLAGS) -c $< -o $@

# Clear the build files
clean:
	rm -f $(OBJ) $(DEP)

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
