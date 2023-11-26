NAME = brainz
SRC = main.cpp Rep.cpp
OBJ = ${SRC:.cpp=.o}
CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

.SILENT:
all : ${NAME}

${NAME} : ${OBJ}
	${CC} ${CXXFLAGS} ${OBJ} -o ${NAME}
	@touch file && echo "ff ouss\n ddd fd ld\n oussma a" > file
	@echo "\033[1;7;32mSuccessfully compiled $(NAME)!\033[0m"

clean:
	rm -rf $(OBJ) file file.replace
	@echo "\033[1;9;7;31mCleaning up...!\033[0m"

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re
