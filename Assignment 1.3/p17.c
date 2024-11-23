//Count digits in a number

//First approach
// #include<stdio.h>

// int main(){
//     int count = 0;
//     int num1 = 0;
//     printf("Enter digits: ");
//     scanf("%d", &num1);

//     if(num1 == 0){
//         count = 1;
//     }

//     while(num1!=0){
//         num1 = num1/10;
//         count = count + 1;
//     }
//     printf("\nThe number of digits are : %d",count);
//     return 0;
// }


#include<stdio.h>

int main(){
    int count = 0;
    int num1 = 0;
    int temp;  // for storing temporary value
    
    printf("Enter digits: ");
    scanf("%d", &num1);
    

    if(num1 == 0){
        printf("\nThe number of digits is: 1");
        return 0;
    }
    
    
    temp = num1;
    if(temp < 0){
        temp = -temp; 
    }
    
    while(temp != 0){
        temp = temp/10;
        count++;
    }
    
    printf("\nThe number of digits in %d is: %d", num1, count);
    return 0;
}