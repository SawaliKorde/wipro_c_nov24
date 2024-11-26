#include <stdio.h>
int main()
{
    int x = 10;
    printf("%d  %d  %d  %d\n", x++, ++x, ++x, x++);
    //      13   14  14  10
    return 0;
}

// go from right - x++ = 11
// 