CC = gcc
CFLAGS = -Wall -g

all : lock adder


lock: lock.c
	$(CC) $(CFLAGS) $^ -o $@ -lpthread

adder : adder.c
	$(CC) $(CFLAGS) $^ -o $@ -lpthread
