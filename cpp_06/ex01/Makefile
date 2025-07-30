# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/20 03:15:27 by mintan            #+#    #+#              #
#    Updated: 2025/07/30 23:35:30 by mintan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler + compile flags + dependency flags
CXX = c++
CXX_FLAGS = -Wall -Werror -Wextra
STD_FLAG = -std=c++98
DEP_FLAGS = -MMD -MP

# Target Executable
NAME = breakfast

# Source, Object and Dependency (headers) files
SRC_NAMES = main Serializer Data
SRCS = $(addsuffix .cpp, $(SRC_NAMES))
OBJ = $(SRCS:.cpp=.o)
DEP = $(OBJ:.o=.d)

# Target to make using Make all
all: $(NAME) print_art

# Generate the mandatory programme by compiling the objects + track header
# dependencies
$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $@

-include $(DEP)

# Generate all the .o files from the .c files for the programme
%.o: %.cpp
	$(CXX) $(CXX_FLAGS) $(STD_FLAG) $(DEP_FLAGS) -c $< -o $@

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
	@echo "                                                 oooo  "
	@echo "                                                 \`888  "
	@echo " .ooooo.   .ooooo.  oooo d8b  .ooooo.   .oooo.    888  "
	@echo "d88' \`\"Y8 d88' \`88b \`888\"\"8P d88' \`88b \`P  )88b   888  "
	@echo "888       888ooo888  888     888ooo888  .oP\"888   888  "
	@echo "888   .o8 888    .o  888     888    .o d8(  888   888  "
	@echo "\`Y8bod8P' \`Y8bod8P' d888b    \`Y8bod8P' \`Y888\"\"8o o888o "
	@echo "                                                       "
