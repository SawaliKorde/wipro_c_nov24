#include "str_chr.h"

int strLen(const char *userString)
{
    int i = 0;
    for (; userString[i] != '\0'; i++);
        
    return i;
}

char *strCat(char *destination, const char *source)
{
    int length = strLen(destination);
    int i = length;
    for (int j = 0; source[j] != '\0'; i++, j++)
    {
        destination[i] = source[j];
    }
    destination[i] = '\0';
    return destination;
}


// It finds address of 1st occurance of the character in the string
// char* strchr(const char*, char)
char *strChr(const char *userString){
    int length = strLen(userString);
    char *result = userString[0];
    return result;
}