#include <stdio.h>

int main() {
    int n;  // Height of the triangle

    printf("Enter the number of rows for the triangle: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

     
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }

        
        printf("\n");
    }

    return 0;
}
