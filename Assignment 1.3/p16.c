// Check if a number is Prime number. Discuss the need of setting the  condition to root of input number and not n/2

#include<stdio.h>
//First approach
// int main(){
//     int num1 = 0;
//     printf("Enter number to check if prime: ");
//     scanf("%d",&num1);

//     if(num1 % 2 == 0){
//         printf("'%d'Number is not prime number: ", num1);
//     }else if(num1 <= 1){
//          printf("'%d'Number is not prime number: ", num1);
//     }
//     for(int i = 2; i*i<= num1; i++){
//         if(num1 % i == 0){
//             printf("'%d'Number is prime number: ", num1);
//         }
//     }
//     return 0;
// }


//Using flag 
int main(){
    int num1 = 0;
    int isPrime = 1;
    printf("Enter number to check if prime: ");
    scanf("%d",&num1);

    if(num1 <=1){
        isPrime = 0;
    }
    else if(num1 == 2){
        isPrime = 1;
    }
    else if (num1 % 2 == 0){
        isPrime = 0;
    }
    else {
        for(int i = 3; i*i <= num1; i++){
            if(num1 % i == 0){
                isPrime = 0;
                break;
            }
        }
    }

    if(isPrime) {
        printf("%d is a prime number\n", num1);
    } else {
        printf("%d is not a prime number\n", num1);
    }
    
    return 0;


}