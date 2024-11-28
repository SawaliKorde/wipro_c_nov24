#include <stdio.h>
#include <string.h>

// int main() {
//     char states[10][32] = {{""}};
//     char capitals[10][32] = {{""}};

//     int n;

//     printf("Enter the number of state-capital pairs (max 10): ");
//     scanf("%d", &n);

//     printf("Enter state and capital as space-separated pairs:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%s %s", states[i], capitals[i]);
//     }

//     printf("\n%-12s %-12s\n-------------------------\n", "STATE", "CAPITAL");
//     for (int i = 0; i < n; i++) {
//         printf("%-12s %-12s\n", states[i], capitals[i]);
//     }

//     return 0;
// }

int main(int argc, char *args[]){

    char states[10][32] = {{""}};
    char capitals[10][32] = {{""}};
    char *addressOfSpace = NULL;
    int count = 0;
    for(int i = 1; i < argc; i++){
       addressOfSpace =  strchr(args[i], ' ');
       count = addressOfSpace - args[i];
       strncpy(states[i-1], args[i],count);
       strcpy(capitals[i-1], addressOfSpace + 1);

    }
    printf("\n%-12s %-12s\n-------------------------\n", "STATE", "CAPITAL");
    for (int i = 0; i < argc - 1 ; i++) {
        printf("%-12s %-12s\n", states[i], capitals[i]);
    }

    return 0;

}
