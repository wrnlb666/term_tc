CC = gcc
CFLAG = -Wall -Wextra
OBJ = termtc.o

.PHONY: all

all: termtc main

termtc: termtc.c
	$(CC) $(CFLAG) $< -c

main: main.c
	$(CC) $(CFLAG) $(OBJ) $< -o $@