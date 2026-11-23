CC = gcc

main: src/main.c 
	gcc src/main.c -o build/main -lncurses 
