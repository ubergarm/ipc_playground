// Ping Pong based on zmq's Hello World client
#include <zmq.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include "time_utils.h"

int main(void)
{
    struct timespec tsOut, tsIn;

    printf("Connecting to hello world server…\n");
    void *context = zmq_ctx_new();
    void *requester = zmq_socket(context, ZMQ_REQ);
    zmq_connect(requester, "tcp://localhost:5555");

    int request_nbr;
    for (request_nbr = 0; request_nbr != 10; request_nbr++) {
        clock_gettime(CLOCK_REALTIME, &tsOut);
        printf("Sending Ping %d…\n", request_nbr);
        zmq_send(requester, (void *)&tsOut, sizeof(tsOut), 0);
        zmq_recv(requester, (void *)&tsIn, sizeof(tsIn), 0);
        double dt = ts2d(diff(tsOut, tsIn));
        printf("Received Pong %d in %.9lf sec\n", request_nbr, dt);

    }
    zmq_close(requester);
    zmq_ctx_destroy(context);
    return 0;
}

