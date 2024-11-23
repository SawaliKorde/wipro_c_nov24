// Find sum of Even Placed Odd digits in a number

#include<stdio.h>

#include<stdio.h>

int main() {
    int num1, sum = 0;
    int position = 1;  
    
    printf("Enter number: ");
    scanf("%d", &num1);
    
    while(num1 != 0) {
        int digit = num1 % 10;
        if(position % 2 == 0 && digit % 2 != 0) {  
            sum += digit;
        }
        position++;
        num1 /= 10;
    }
    
    printf("Sum of odd digits at even positions: %d\n", sum);
    return 0;
}