#include<stdio.h>
#include<stdlib.h>

int main(int argcount, char *args[]){

    int input_number = atoi(args[1]);
    for(int i = 1; i<= 20; i++){
        printf("%d * %02d = %3d \n", input_number,i,input_number*i);
    }
}