// Check if a letter is small case

#include <stdio.h>
#include<ctype.h>
int main(){
    char input ='\0';
    printf("Enter input to check if a letter is small case: ");
    scanf("%c", &input);
    if(islower(input)){
        printf("'%c' is small case \n",input);
    }
    return 0;
}