// utilities for working with timespec 
#include <stdio.h>
#include <time.h>

// return the difference of two times
timespec diff(timespec start, timespec end);
// return a double value in seconds
double ts2d(timespec ts);

