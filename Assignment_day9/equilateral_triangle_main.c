#include <stdio.h>
#include "EquiTriangle.h"

int main() {
    int n;  // Height of the triangle

    printf("Enter the number of rows for the triangle: ");
    scanf("%d", &n);

    equilateralTriangle(n);

    return 0;
}
