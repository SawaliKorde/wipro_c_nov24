#include<stdio.h>
// Usage of %p and %u to see the address
// fArray, fArray+1, fArray-1, fArray+2
// All of these are addresses
 
 
// *fArray, *fArray+1, *fArray + *fArray
// All of these are values
 
 
// &fArray, &fArray+1, &fArray-1, &fArray+2
// All of these are addresses
int main(){
    float fArray[] = {2.2f, 14.1f, 1.5f, 9.1f, 6.75f};
    //fArray - address of first element
    //fArray - address of third element
    //fArray, fArray+1, fArray-1, fArray+2
    printf("fArray: %u, fArray +1: %u, fArray-1: %u, fArray+2: %u\n ", fArray, fArray+1, fArray-1, fArray+2);

    printf("*fArray: %.2f, *fArray +1: %.2f, *fArray-1: %.2f, *fArray+2: %.2f\n ", *fArray, *fArray+1, *fArray-1, *fArray+2);

    printf("&fArray: %u, &fArray +1: %u, &fArray-1: %u, &fArray+2: %u ", &fArray, &fArray+1, &fArray-1, &fArray+2);


    
    return 0;
}