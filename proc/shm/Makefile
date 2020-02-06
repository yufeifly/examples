CFLAGS = -Wall -g

all : read write

read : shmread.c shmdata.h
	gcc $(CFLAGS) $^ -o $@ -lm

write : shmwrite.c shmdata.h
	gcc $(CFLAGS) $^ -o $@ -lm
	
clean:
	rm -rf read write
