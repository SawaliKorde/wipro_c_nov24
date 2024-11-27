#include <stdio.h>

int main() {
    int n, target, count = 0;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare the array after knowing its size
    int arr[n];

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the target element to find its frequency
    printf("Enter the element to find its frequency: ");
    scanf("%d", &target);

    // Loop to count the frequency of the target element
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    // Output the frequency of the target element
    printf("The element %d appears %d time(s) in the array.\n", target, count);

    return 0;
}
