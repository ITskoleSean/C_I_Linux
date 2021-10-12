#include "how_many_times_called.h"

int main(void) {

    for ( int i = 0; i < 10; i++ ) {
        printf("%04d\n", how_many_times_am_i_called());
    }
}