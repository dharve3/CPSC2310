// Question 19:
// THIS IS A 2 PART QUESTION:

// PART 1: Write the code to dynamically allocate memory for a 2D array of integers using the algorithm discussed that requires only 1 calls to malloc or calloc. 
// PART 2: Write the code to give the memory back to the operating system.

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Part 1: Allocate
    int row = 3; int col = 4;
    int i, j;
    int *arr;

    // 1D '2D' array
    arr = (int*) malloc(row * col * sizeof(int));

    // Example: Initialize the array with some values
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            arr[i * col + j] = i * col + j + 1;  // Filling the array with values
        }
    }

    // Print the array
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%3d ", arr[i * col + j]);  // Accessing as if it's 2D
        }
        printf("\n");
    }

    // Part 2: Free
    free(arr);

    return 0;
}