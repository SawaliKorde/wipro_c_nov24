#include<stdio.h>

int main(){

    char str1[32] = "\0";

    printf("Enter the string input:\n");
    gets(str1);
    printf("You entered: %s\n", str1);

    return 0;
}
