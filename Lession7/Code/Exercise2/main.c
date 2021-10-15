#include "./Headers/Bubblesort.h"
#include "./Headers/BinarySearch.h"

int main(void) {
    int unSorted[10] = {10, 9, 7, 8, 1, 3, 2, 4, 5, 6};
    sort(unSorted, 10);

    for(int i = 0; i < 10; i++ ) 
        printf("%d - ", unSorted[i]);
}
