#include "stack.h"
#include<stdio.h>
//Creating array in heap
int push(double *ptr, int sp, int size)
{
    if(sp == size-1) {
        puts("Stack is Full");
        return sp;
    }
    sp++;
    printf("Enter new element to be pushed on the Stack: ");
    scanf("%lf", &ptr[sp]);
    // printf("%.2lf element is pushed on theStack at index %d \n", sp);
    return sp;
}

int pop(double *stk, int sp)
{
    if(sp == -1 ){
        puts("Stack is empty");
        return sp;
    }
    sp++;
    printf("Popped element of stack is %.2lf \n:", stk[sp]);
    sp --;
    return sp;
}

void top(const double *stack)
{
}

void displayStack(const double *ptr)
{
}

int isEmpty(const double *ptr)
{
}