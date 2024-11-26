#include <stdio.h>
#include <stdlib.h>

// Find the sum of odd digits at odd positions in a number
int main(int argc, char *argv[]) {
    // Read input number from command-line arguments
    int inputNumber = atoi(argv[1]);

    int sum1 = 0, sum2 = 0; // sum1 and sum2 as described
    int flip = 0;           // Start with flip = 0
    int remainderDigit = 0; // Variable to store the current digit

    while (inputNumber != 0) {
        remainderDigit = inputNumber % 10; // Extract the last digit
        inputNumber = inputNumber / 10;    // Remove the last digit

        if (flip == 0) { // Odd positions
            if (remainderDigit % 2 != 0) { // If the digit is odd
                sum1 += remainderDigit;
            }
            flip = 1; // Switch to even positions
        } else {      // Even positions
            if (remainderDigit % 2 != 0) { // If the digit is odd
                sum2 += remainderDigit;
            }
            flip = 0; // Switch to odd positions
        }
    }

    // Determine which sum holds the odd digits at odd positions
    if (flip == 0) {
        printf("Sum of odd digits at odd positions is %d\n", sum2);
    } else {
        printf("Sum of odd digits at odd positions is %d\n", sum1);
    }

    return 0;
}
