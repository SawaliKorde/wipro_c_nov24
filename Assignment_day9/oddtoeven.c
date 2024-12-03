#include <stdio.h>

void oddtoeven(int arr[], int n) {
    
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            arr[i] = arr[i] - 1;
        }
        else {
            arr[i] = arr[i] + 1;
        }
    }
}

int main() {
    int n = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    oddtoeven(arr, n); // Call the function to modify the array

    printf("The elements of array after changing is: ");
    for(int i = 0 ;i < n; i++) {
        printf("%d ", arr[i]);
    }
    

    return 0;
}