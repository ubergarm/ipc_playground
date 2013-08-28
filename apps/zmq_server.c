// Ping Pong based on zmq's Hello World server
#include <zmq.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <assert.h>
#include <time.h>
#include "time_utils.h"

int main(void)
{
    struct timespec tsOut, tsIn;

    // Socket to talk to clients
    void *context = zmq_ctx_new();
    void *responder = zmq_socket(context, ZMQ_REP);
    int rc = zmq_bind(responder, "tcp://*:5555");
    assert (rc == 0);

    while (1) {
        zmq_recv(responder, (void *)&tsIn, sizeof(tsIn), 0);
        /* printf("Received PING\n"); */
        clock_gettime(CLOCK_MONOTONIC, &tsOut);
        zmq_send(responder, (void *)&tsOut, sizeof(tsOut), 0);
        /* printf("Sent PONG\n"); */
    }
    return 0;
}

