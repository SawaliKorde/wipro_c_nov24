#include<stdio.h>

void swapArrayHalf(int size, int arr[]){
    int mid = size / 2;
    
    for(int i = 0; i < mid; i++){
        int temp = arr[i];
        arr[i] = arr[mid + i];
        arr[mid + i] = temp;
    }
}

int main(){
    int arraySize;
    printf("Enter size of array: ");
    scanf("%d", &arraySize);

    int arr1[arraySize];

    printf("Enter elements of array:\n");
    for(int i = 0; i < arraySize; i++){
        scanf("%d", &arr1[i]);
    }

    swapArrayHalf(arraySize, arr1);

    printf("Array after swapping halves:\n");
    for(int i = 0; i < arraySize; i++){
        printf("%d ", arr1[i]);
    }

    return 0;
}