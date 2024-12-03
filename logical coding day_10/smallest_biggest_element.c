#include <stdio.h>

void findMinMax(int size, double arr[]) {
    double smallest = arr[0];
    double biggest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        if (arr[i] > biggest) {
            biggest = arr[i];
        }
    }

    printf("Smallest element: %lf\n", smallest);
    printf("Biggest element: %lf\n", biggest);
}

int main() {
    int arraySize;
    printf("Enter size of array: ");
    scanf("%d", &arraySize);

    double arr[arraySize];
    printf("Enter elements of array:\n");
    for (int i = 0; i < arraySize; i++) {
        scanf("%lf", &arr[i]);
    }

    findMinMax(arraySize, arr);

    return 0;
}