CC = gcc
CFLAGS = -Wall -g

all : main ms
main : simple-thread.c
	$(CC) $(CFLAGS) $^ -o $@ -lpthread

ms : multi-select.c
	$(CC) $(CFLAGS) $^ -o $@ -lpthread

