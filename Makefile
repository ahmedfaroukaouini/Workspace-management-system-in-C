CC = gcc

main: src/main.c 
	gcc src/main.c -o build/main -lncurses

utils.o: src/utils.c include/utils.h
	gcc -c src/utils.c -o build/utils.o
