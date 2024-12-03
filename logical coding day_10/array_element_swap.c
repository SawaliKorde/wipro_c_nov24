// Swap consecutive elements of an Array using a for loop
#include<stdio.h>

void swapArrayElements(int size, int arr[]){
    for(int i = 0; i < size - 1; i += 2){
       int temp = arr[i];
       arr[i] = arr[i+1];
       arr[i+1] = temp;
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

    swapArrayElements(arraySize, arr1);

    printf("Swapped array:\n");
    for(int i = 0; i < arraySize; i++){
        printf("%d ", arr1[i]);
    }

    return 0;
}