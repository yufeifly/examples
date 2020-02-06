CFLAGS = -Wall -g
OBJS = select alarm

all : $(OBJS)

select : select.c
	gcc $(CFLAGS) $^ -o $@

alarm : alarm.c
	gcc $(CFLAGS) $^ -o $@

clean:
	rm -rf $(OBJS)

