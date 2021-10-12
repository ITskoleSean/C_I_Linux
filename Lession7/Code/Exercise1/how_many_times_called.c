#include "how_many_times_called.h"

int how_many_times_am_i_called() {
    static int iCalledTimes = 0;
    return iCalledTimes++;
}