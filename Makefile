CC = gcc
CFLAGS = -Wall -Wextra -Iinclude
LDFLAGS = -lcjson -lncurses -lm

build/main: src/main.c src/utils.c include/utils.h
	mkdir -p build
	$(CC) $(CFLAGS) src/main.c src/utils.c -o build/main $(LDFLAGS)

clean:
	rm -rf build/main

run:
	./build/main
