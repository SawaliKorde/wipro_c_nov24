#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *args[]){
    int inputNumber = atoi(args[1]);
    printf("User entered input is %d\n", inputNumber);

    int i, j = 0;

    for(i = 0; i < inputNumber; i++){
        for(j=0; j<=i;j++){
            printf("*");
        }
       printf("\n");
    }
    
}