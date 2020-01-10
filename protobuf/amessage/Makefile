CFLAGS = -lprotobuf-c
all: amessage_serialize amessage_deserialize

amessage_serialize: amessage_serialize.c amessage.pb-c.c
	gcc  -o $@ $^   $(CFLAGS)

amessage_deserialize:amessage_deserialize.c amessage.pb-c.c
	gcc  -o $@ $^ $(CFLAGS)

clean:
	rm -rf $(all)
