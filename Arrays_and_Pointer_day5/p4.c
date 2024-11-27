//Reverse an array of size N of type float

#include<stdio.h>

int main(){
    int arraySize = 0;
    float arr[50] = {0.0};

    printf("Enter number of elements of array:");
    scanf("%d", &arraySize);

    printf("Enter the elements of array:");
    for(int i = 0; i < arraySize; i++){
        scanf("%f", &arr[i]);
    }

    for(int i = 0, j = arraySize - 1; i < j; i++, j--){

        //Swap
        arr[i] = arr[j];
    }

    printf("Reversed array is: \n");
    for(int i = 0; i < arraySize; i++){
        printf("%.2f\n",arr[i] );
    }

    return 0;


}
