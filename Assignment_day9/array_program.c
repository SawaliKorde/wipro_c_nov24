// //Find sum of the elements of an Array using a recursive function

#include<stdio.h>

int sumOfElements(int arraySize, int *ptr){
    if(arraySize == 1){
        return *ptr;
    }
    return *ptr + sumOfElements(arraySize -1, ptr + 1);
}

int main(){
    int arraySize = 0;

    int arr[50] = {0};

    printf("Enter number of elements in array:\n");
    scanf("%d", &arraySize);

    printf("Enter elements of array:\n");
    for(int i = 0; i < arraySize; i++){
        scanf("%d",&arr[i]);
    }

   int result =  sumOfElements(arraySize,arr);
   printf("Sum of Array is %d : ", result);

   return 0;

}

