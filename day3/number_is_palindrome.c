// To check if palindrome or not
#include <stdio.h>
#include <string.h>

int main() {
    int num1;
    char str[20], temp[20];

    printf("Enter a number: ");
    scanf("%d", &num1); 

    sprintf(str, "%d", num1); 
    strcpy(temp, str);        // Copy the original string to temp
    strrev(temp);             

    if (strcmp(temp, str) == 0) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}
