##
## NOT EPITECH PROJECT, 2023
## Makefile
## File description:
## It's my Makefile
##

PP = g++
src = src/main.cpp	\

NAME = seylors

${NAME}:
	@${PP} -o ${NAME} ${src} -Iinclude -Wall -g3
	@echo 'Files compiled'

all : ${NAME}

clean :
	@rm -rf ${OBJ}
	@echo 'Temporary files deleted'

fclean : clean
	@rm -rf ${NAME}
	@rm -rf unit_tests
	@echo 'Executable deleted'

re : fclean all

test:
	@clear
	@${PP} ${src} \
	tests/*.cpp -W -Iinclude -o unit_tests \
	--coverage -lcriterion
	@./unit_tests
	@gcovr --exclude tests/
	@gcovr --exclude tests/ --branche

.PHONY: re fclean clean all test
