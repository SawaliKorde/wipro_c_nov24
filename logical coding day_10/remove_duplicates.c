// Remove duplicate elements from the Array and shift the
// elements (If n duplicate elements are removed then n zeroes should trail in the array)

#include <stdio.h>

void removeDuplicates(int size, int arr[]) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            // If duplicate found
            if (arr[i] == arr[j]) {
                // Shift elements left
                for (int k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                // Set last element to zero
                arr[size - 1] = 0;
                
                size--;
                // Decrement j to recheck current position
                j--;
            }
        }
    }
}

int main() {
    int arraySize;
    printf("Enter size of array: ");
    scanf("%d", &arraySize);

    int arr[arraySize];
    printf("Enter elements of array:\n");
    for (int i = 0; i < arraySize; i++) {
        scanf("%d", &arr[i]);
    }

    removeDuplicates(arraySize, arr);

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < arraySize; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}