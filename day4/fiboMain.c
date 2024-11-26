#include <stdio.h>
#include <stdlib.h>
#include "fibo.h"

int main(int argc, char *argv[]) {
    if(argc != 2) {
        printf("Usage: ./program <number>\n");
        return 1;
    }
    int numberOfTerms = atoi(argv[1]);
    
    printf("The Fibo series of %d terms is:\n", numberOfTerms);
    for(int i = 0; i < numberOfTerms; i++) {
        printf("%d ", fiboSeries(i));
    }
    printf("\n");
    return 0;
}


