#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input[256]; // Buffer to store the input line
    int numbers[100]; // Array to store parsed numbers
    int count = 0;    // Counter for how many numbers were parsed

    printf("Enter space-separated numbers: ");
    gets(input); // Read the entire line of input (not safe for long inputs)

    // Tokenize the input and parse each number
    char *token = strtok(input, " "); // Get the first token
    while (token != NULL) {
        numbers[count++] = atoi(token); // Convert token to integer and store
        token = strtok(NULL, " ");     // Get the next token
    }

    // Print the parsed numbers
    printf("You entered:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
