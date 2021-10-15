#include "../Headers/Bubblesort.h"
static int swap(int *a, int*b);

void sort(int *array, int length) {
    int swapped = TRUE;
    int limit = length - 1;
    
    while (swapped) {
        swapped = FALSE;
        for(int i = 0; i < limit; i++) {
            swap(&array[i], &array[i - 1]);
        }
    }
}


static int swap(int *a, int* b) {
    int temp = *b;
    *b = *a;
    *a = temp;
}
