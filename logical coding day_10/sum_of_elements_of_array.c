// Find sum of the elements of an Array using a recursive function.

#include<stdio.h>

int sumOfElements(int size, int *arr){

    if(size == 0){
        return 0;
    }
    return *arr + sumOfElements(size -1 ,arr + 1);
}



int main(){

    int arraySize = 0;
    printf("Enter size of array:");
    scanf("%d",&arraySize);

    int arr1[arraySize];

    printf("Enter elements of array:\n");
    for(int i = 0; i < arraySize; i++){
        scanf("%d",&arr1[i]);
    }
    
    int result = sumOfElements(arraySize,arr1);
    printf("Sum of elements %d\n", result);

}