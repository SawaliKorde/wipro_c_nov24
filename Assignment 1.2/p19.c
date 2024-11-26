// Check if a year is Leap year
#include <stdio.h>
#include<ctype.h>
int main(){
    int input = 0;
    printf("Enter input to check if a year is leap year: ");
    scanf("%d", &input);
    if(islower(input)){
        printf("'%c' is small case \n",input);
    }
    return 0;
}