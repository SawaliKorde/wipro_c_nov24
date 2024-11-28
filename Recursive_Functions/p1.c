#include<stdio.h>


int factorial(int num1){
    if(num1 <= 1){
       return 1;
    }
    
    return num1 * factorial(num1 - 1);
}

int main(){
    int num = 0;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %d\n", num, factorial(num));
    }

    return 0;
}


// Call stack

// 1st iteration for fact(4)
// 4 * (4-1) = 12
// 12 value passed as it is value of function 
// 3 * (3 - 1) = 6
// 6 value returns
// 2 * (2 - 1) = 2
// 2 value is returned
// 1 breaks
// Iteration are top down approach in stack