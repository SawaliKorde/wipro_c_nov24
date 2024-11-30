#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the X (odd number): ");
    scanf("%d", &n);

   
    if (n % 2 == 0) {
        printf("Please enter an odd number.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
        
            if (i == j || i + j == n - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");  
    }

    return 0;
}
