// Implement Karpekar's constant program. 
// Print the number of times the logic of finding the difference of 2 numbers had to be iterated.

#include <stdio.h>
#include <stdlib.h>

// Function to sort digits in ascending order
void sortAscending(int *digits) {
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (digits[i] > digits[j]) {
                int temp = digits[i];
                digits[i] = digits[j];
                digits[j] = temp;
            }
        }
    }
}


void sortDescending(int *digits) {
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (digits[i] < digits[j]) {
                int temp = digits[i];
                digits[i] = digits[j];
                digits[j] = temp;
            }
        }
    }
}

int main() {
    int number, iterations = 0;
    
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);
    
    while (number != 6174) {
        int digits[4];
        
       
        for (int i = 3; i >= 0; i--) {
            digits[i] = number % 10;
            number /= 10;
        }
        
        // Sort digits
        int ascending[4], descending[4];
        for (int i = 0; i < 4; i++) {
            ascending[i] = digits[i];
            descending[i] = digits[i];
        }
        
        sortAscending(ascending);
        sortDescending(descending);
        
        // Calculate ascending and descending numbers
        int ascNum = ascending[0]*1000 + ascending[1]*100 + ascending[2]*10 + ascending[3];
        int descNum = descending[0]*1000 + descending[1]*100 + descending[2]*10 + descending[3];
        
        // Calculate difference
        number = descNum - ascNum;
        iterations++;
    }
    
    printf("Reached Kaprekar's constant in %d iterations\n", iterations);
    
    return 0;
}