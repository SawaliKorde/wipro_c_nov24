#include<stdio.h>

int main(){
    int rows = 0;
    int columns = 0;
    int arr[10][10] = {{0}};

    printf("Enter number of rows:\n");
    scanf("%d", &rows);

    printf("Enter number of columns:\n");
    scanf("%d", &columns);

    printf("Enter elements of the 2d array:\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            printf("Elements [%d][%d]", i, j);
             scanf("%d", &arr[i][j]);
        }
    }

    printf("The 2d array is:\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            printf("%d", arr[i][j]);
        }
         printf("\n");
    }

    return 0;
}