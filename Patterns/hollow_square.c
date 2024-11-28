#include <stdio.h>

// argc (argument count) is an integer that represents the number of command-line arguments passed to the program, including the program name itself.
// args (argument vector) is an array of strings (char pointers) that contains the actual command-line arguments.


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *args[]) {
    int inputNumber = atoi(args[1]);
    printf("User entered input number is %d:\n", inputNumber);

    for (int i = 1; i <= inputNumber; i++) {
        if (i == 1 || i == inputNumber) {
            
            for (int j = 1; j <= inputNumber; j++) {
                putc('*', stdout);
                putc(' ', stdout);
            }
            printf("\n");
        } else {
            // Hollow rows with stars at the beginning and end
            for (int j = 1; j <= inputNumber; j++) {
                if (j == 1 || j == inputNumber) {
                    putc('*', stdout);
                } else {
                    putc(' ', stdout);
                }
                putc(' ', stdout);  // Adding space between characters
            }
            printf("\n");
        }
    }
    return 0;
}


// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char *args[]) {
//     // Check if an argument is provided
//     if (argc < 2) {
//         fprintf(stderr, "Usage: %s <number>\n", args[0]);
//         return 1;
//     }

//     // Convert and validate input
//     char *endptr;
//     long inputNumber = strtol(args[1], &endptr, 10);

//     // Check for conversion errors
//     if (*endptr != '\0' || inputNumber <= 0) {
//         fprintf(stderr, "Please enter a valid positive integer\n");
//         return 1;
//     }

//     // Cast to int after validation
//     int n = (int)inputNumber;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             if (i == 1 || i == n || j == 1 || j == n) {
//                 printf("* ");
//             } else {
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }