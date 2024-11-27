// Find the smallest and largest element from array of length N given by user (Array is of type double)
#include<stdio.h>
void findSmallestAndLargest (double arr[], int n){
    double smallest = arr[0];
    double largest = arr[0];

    for(int i = 1; i<n; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    printf("Largest number is %.2f\n", largest);
    printf("Smallest number is %.2f", smallest);
}


int main(){
    int n = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    double arr[n];

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%lf", &arr[i]);
    }
    findSmallestAndLargest(arr,n);

    return 0;
}