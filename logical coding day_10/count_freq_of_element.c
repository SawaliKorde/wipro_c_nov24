#include<stdio.h>

int countFrequency(int size, int arr[], int num){
    int freq = 0;
    for(int i = 0; i < size; i++){
        if(num == arr[i]){
            freq += 1;
        }
    }
    return freq;
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

    int num;
    printf("Enter element from array to find frequency: ");
    scanf("%d", &num);

    int frequency = countFrequency(arraySize, arr1, num);
    printf("Frequency of %d is: %d\n", num, frequency);

    return 0;
}