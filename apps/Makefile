CC=g++
CFLAGS=-Wall -O2
LDFLAGS=-lzmq -lrt
BINDIR = ./bin
DEPS = time_utils.h

all: zmq_server zmq_client

# time_utils.o: time_utils.c $(DEPS)	
# time_utils: time_utils.c
# 	$(CC) $(CFLAGS) -o $(BINDIR)/$@ $< $(LDFLAGS)

zmq_server: zmq_server.c
	$(CC) $(CFLAGS) -o $(BINDIR)/$@ $< $(LDFLAGS)

zmq_client: zmq_client.c
	$(CC) $(CFLAGS) -o $(BINDIR)/$@ $< $(LDFLAGS)

clean:
	rm $(BINDIR)/* *.o

