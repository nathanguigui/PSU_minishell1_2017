##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## 
##

all:
	@gcc *.c -o mysh -g -include get_next_line.h
	@echo "make: all done."

fclean:
	@rm mysh
	@echo "make: fclean done."

re:	fclean all
	@echo "make: re done."