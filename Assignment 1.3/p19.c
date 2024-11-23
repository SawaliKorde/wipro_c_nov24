// Find sum of even digits in a number

#include<stdio.h>

int main(){
    int sum = 0;
    int num1 = 0;
    int digits = 0;

    printf("Enter number: ");
    scanf("%d", &num1);

    while(num1 !=0){
        digits = num1 % 10;
        if(digits % 2 == 0){
            sum +=  digits;
        }
        num1 = num1 / 10;
    }
    printf("Sum of even digits is %d\n", sum);
    return 0;
    
}