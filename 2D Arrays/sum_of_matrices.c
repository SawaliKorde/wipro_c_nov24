//Find sum of 2 matrices
#include<stdio.h>

// Function to calculate the sum of two matrices
void sumOfMatrices(int rows, int columns, int arr[rows][columns], int arr1[rows][columns]) {
    // Resultant matrix to store the sum
    int sum[rows][columns];

    // Calculate the sum of the two matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            sum[i][j] = arr[i][j] + arr1[i][j];
        }
    }

    
    printf("\nThe sum of the two matrices is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows = 0, columns = 0;
    int rows1 = 0, columns1 = 0;

    // Input dimensions of the first matrix
    printf("Enter number of rows in first matrix: ");
    scanf("%d", &rows);
    printf("Enter number of columns in first matrix: ");
    scanf("%d", &columns);

    // Input dimensions of the second matrix
    printf("Enter number of rows in second matrix: ");
    scanf("%d", &rows1);
    printf("Enter number of columns in second matrix: ");
    scanf("%d", &columns1);

    // Check if the dimensions match
    if (rows != rows1 || columns != columns1) {
        printf("Error: Matrices must have the same dimensions for addition.\n");
        return 1;
    }

    // Declare the first matrix
    int arr[rows][columns];

      // Declare the second matrix
    int arr1[rows1][columns1];

    // Input elements of the first matrix
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    // Input elements of the second matrix
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns1; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    // Print the first matrix
    printf("\nFirst matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Print the second matrix
    printf("\nSecond matrix is:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns1; j++) {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    // Call the function to calculate the sum
    sumOfMatrices(rows, columns, arr, arr1);

    return 0;
}
