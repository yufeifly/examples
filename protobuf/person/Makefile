objs = person_serial person_deserial
inc = person.pb-c.c person.pb-c.h
LIBS = -lprotobuf-c

all : $(objs)

person_serial: $(inc) $(LIBS)

person_deserial: $(inc) $(LIBS)

.PHONY = clean

clean:
	rm -rf $(objs)
