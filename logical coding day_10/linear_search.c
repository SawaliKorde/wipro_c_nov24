#include "linear_search.h"

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;  // Return index if found
        }
    }
    return -1;  
}