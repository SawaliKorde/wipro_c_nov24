//Check if a character is alphabet
#include <stdio.h>
#include<ctype.h>
int main(){
    char input ='\0';
    printf("Enter input to check if character alphabet or not: ");
    scanf("%c", &input);
    if(isalpha(input)){
        printf("'%c' is an alphabet \n",input);
    }
    return 0;
}

