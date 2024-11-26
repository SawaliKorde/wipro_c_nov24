#include<stdio.h>
#include "fibo.h"

int fiboSeries(int num1){
    if(num1 <= 1){
        return num1;
    }
    return fiboSeries(num1-1) + fiboSeries(num1 - 2);

}