// Check if a character is an alphanumeric

#include <stdio.h>
#include<ctype.h>
int main(){
    char input ='\0';
    printf("Enter input to check if character alphabet or not: ");
    scanf("%c", &input);
    if(isalnum(input)){
        printf("'%c' is an alphanumeric \n",input);
    }
    return 0;
}