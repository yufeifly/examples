CFLAGS = -Wall -g

all : read write

read : read.c
	gcc $(CFLAGS) $^ -o $@

write : write.c
	gcc $(CFLAGS) $^ -o $@

.PHONY = clean
clean : 
	rm -rf read write
