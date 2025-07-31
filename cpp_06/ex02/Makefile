# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/20 03:15:27 by mintan            #+#    #+#              #
#    Updated: 2025/07/31 12:37:32 by mintan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler + compile flags + dependency flags
CXX = c++
CXX_FLAGS = -Wall -Werror -Wextra
STD_FLAG = -std=c++98
DEP_FLAGS = -MMD -MP

# Target Executable
NAME = identify

# Source, Object and Dependency (headers) files
SRC_NAMES = main
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
	@echo "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿"
	@echo "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿"
	@echo "⣿⣿⡿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⠿⢿⣿⣿"
	@echo "⣿⣿⠀⢠⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⡄⠀⣿⣿"
	@echo "⣿⣿⠀⢠⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿"
	@echo "⣿⣿⠀⢸⠀⠀⠀⠀⣀⣄⡀⠀⠀⠀⢸⡇⠀⠠⠤⠤⠤⠤⠤⠤⠤⠤⠀⠀⣿⣿"
	@echo "⣿⣿⠀⢸⠀⠀⠀⣼⣿⣿⣿⡆⠀⠀⢸⡇⠀⠰⠶⠶⠶⠶⠶⠶⠀⠀⠀⠀⣿⣿"
	@echo "⣿⣿⠀⢸⠀⠀⠀⢻⣿⣿⣿⠇⠀⠀⢸⡇⠀⠰⠶⠶⠀⠀⠶⠶⠶⠶⠀⠀⣿⣿"
	@echo "⣿⣿⠀⢸⠀⠀⠀⣀⠙⠛⢁⣀⠀⠀⢸⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿"
	@echo "⣿⣿⠀⢸⠀⢀⣾⣿⣿⣿⣿⣿⣧⠀⢸⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿"
	@echo "⣿⣿⠀⢸⢀⣾⣿⣿⣿⣿⣿⣿⣿⣇⢸⡇⠀⠀⠀⠀⠀⠛⠛⠛⠛⠛⠃⠀⣿⣿"
	@echo "⣿⣿⠀⢸⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣼⡇⠀⠀⠀⠛⠛⠛⠛⠛⠛⠛⠃⠀⣿⣿"
	@echo "⣿⣿⣄⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣠⣿⣿"
	@echo "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿"
	@echo "⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿"
