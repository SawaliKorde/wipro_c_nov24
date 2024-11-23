// Find sum of the digits in a number

# include<stdio.h>

int main(){
    int sum = 0;
    int num1 = 0;

    printf("Enter number: ");
    scanf("%d", &num1);

    
    while(num1 != 0){
        sum += num1 % 10;
        num1 = num1 / 10;

    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}