#include <stdio.h>
#include "linear_search.h"

int main() {
    int size, key;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter search key: ");
    scanf("%d", &key);

    int result = linearSearch(arr, size, key);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}