// Reverse the elements of an Array using a while loop.
#include<stdio.h>

void reversedArray(int size, int arr[]){
    int start = 0;
    int end = size - 1;

    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
      
        start++;
        end--;
    }
}

int main(){
    int arraySize;
    printf("Enter Size:\n");
    scanf("%d",&arraySize);

    int arr[arraySize];
    printf("Enter elements of array\n");
    for(int i = 0; i < arraySize; i++){
        scanf("%d",&arr[i]); 
    }

    reversedArray(arraySize, arr);

    for (int i = 0; i < arraySize; i++) {
        printf("%d ", arr[i]); 
    }
    return 0;
}