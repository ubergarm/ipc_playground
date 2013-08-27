CC=gcc
CFLAGS=-Wall -O2
LDFLAGS=-lzmq
BINDIR = ./bin

all: zmq_server zmq_client
	
zmq_server: zmq_server.c
	$(CC) $(CFLAGS) -o $(BINDIR)/$@ $< $(LDFLAGS)

zmq_client: zmq_client.c
	$(CC) $(CFLAGS) -o $(BINDIR)/$@ $< $(LDFLAGS)

clean:
	rm $(BINDIR)/* *.o

