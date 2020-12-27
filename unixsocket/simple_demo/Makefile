all : server client

server:
	gcc server.c -o server

client:
	gcc client.c -o client

tags:
	ctags -R .

clean:
	rm -rf server client tags client.socket server.socket
