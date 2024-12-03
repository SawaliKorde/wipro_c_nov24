#include<stdio.h>

int main(){
    int n = 0;
    printf("Enter size of array:\n");
    scanf("%d", &n);

    int arr1[n];

    printf("enter the array elements:\n");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr1[i]);
    }

    printf("Your entered array is:\n");
    for(int i = 0; i < n; i++){
        printf("%d\n",arr1[i]);
    }

    return 0;
}