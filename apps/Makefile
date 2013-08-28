#it ain't pretty, but really, is any Makefile?! ;p
CC=g++
CFLAGS=-Wall -O2
LDFLAGS=-lzmq -lrt
BINDIR = ./bin

all: zmq_server zmq_client

#zmq_server.o zmq_client.o time_utils.o: time_utils.h

zmq_server: zmq_server.o time_utils.o
	$(CC) $(CFLAGS) $^ $(LDFLAGS) -o $(BINDIR)/$@ $

zmq_client: zmq_client.o time_utils.o
	$(CC) $(CFLAGS) $^ $(LDFLAGS) -o $(BINDIR)/$@ $

clean:
	rm -f $(BINDIR)/* *.o

# The following snippet was taken from:
# http://c.learncodethehardway.org/book/ex28.html
# The Checker
SOURCES=$(wildcard *.c)
BADFUNCS='[^_.>a-zA-Z0-9](str(n?cpy|n?cat|xfrm|n?dup|str|pbrk|tok|_)|stpn?cpy|a?sn?printf|byte_)'
check:
	@echo Files with potentially dangerous functions:
	@egrep $(BADFUNCS) $(SOURCES) || true

# The Test
tests:
	killall zmq_server
	./bin/zmq_server &
	./bin/zmq_client
