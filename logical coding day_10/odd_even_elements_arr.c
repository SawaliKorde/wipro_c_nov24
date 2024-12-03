// Convert the Odd elements in an array to Even numbers by adding one and Convert the Even elements into Odd by subtracting 1.

#include <stdio.h>

void convertArray(int size, int arr[]) {
   for (int i = 0; i < size; i++) {
       if (arr[i] % 2 != 0) {
          
           arr[i] += 1;
       } else {
           
           arr[i] -= 1;
       }
   }
}

int main() {
   int arraySize;
   printf("Enter size of array: ");
   scanf("%d", &arraySize);

   int arr[arraySize];
   printf("Enter elements of array:\n");
   for (int i = 0; i < arraySize; i++) {
       scanf("%d", &arr[i]);
   }

   convertArray(arraySize, arr);

   printf("Modified array:\n");
   for (int i = 0; i < arraySize; i++) {
       printf("%d ", arr[i]);
   }

   return 0;
}