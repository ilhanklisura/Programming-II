#include <stdio.h>
#include <stdlib.h>

int main() {
    int array_size = 100;

    // Dynamicly allocate 400 bytes of memory and return
    // the pointer to that memory location
    int *p = (int*) malloc(array_size*sizeof(int));

    // generate random numbers
    for (int i=0; i<array_size; i++){
        p[i] = rand()%100;
    }

    // print random numbers
    for (int i=0; i<array_size; i++){
        printf("%d,", p[i]);
    }

    // free memory
    free(p);
    return 0;
}

