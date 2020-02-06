CC = gcc
CFLAGS = -Wall
OBJS = main.o disk.o file.o
TARGET = filesystem
RM = rm -rf

$(TARGET):$(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -g -o $(TARGET) 

# (将OBJS中所有扩展名为.o的文件替换成扩展名为.c的文件)
#$(OBJS): %.o:%.c
#	$(CC) $(CFLAGS) -c $^ -o $@ 

main.o: main.c
	$(CC) $(CFLAGS) -c  $^ -o $@ 

disk.o : disk.c
	$(CC) $(CFLAGS) -c  $^ -o $@ 

file.o : file.c
	$(CC) $(CFLAGS) -c  $^ -o $@ 

clean:
	-$(RM) $(TARGET) $(OBJS)
