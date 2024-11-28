//strcpy()

#include <stdio.h>

char* copyString(const char *userString)
{
    char newString[32] = "";
    int i = 0;
    for (; userString[i] != '\0'; i++){
        newString[i] = userString[i];
    }
    newString[i] = '\0';

    return newString;
    
}

int main()
{
    char userString[32] = "";
    puts("Enter a string to copy");
    gets(userString);
    char *newString = copyString(userString); //takes 2 arguments - destination and source
    printf("Original string: '%s' at address %p\n", userString, (void *)userString);
    printf("Copied string: '%s' at address %p\n", newString, (void *)newString);

    return 0;
}

// to give the caller access to the copied string, you return the address of newString as a char*