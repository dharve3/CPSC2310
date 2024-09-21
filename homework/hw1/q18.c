// Question 18:
// THIS IS A 2 PART QUESTION:

// PART 1: Write the code to dynamically allocate memory for a 2D array of integers using the algorithm discussed that requires only 2 calls to malloc or calloc. 
// PART 2: Write the code to give the memory back to the operating system.

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Part 1: Allocate
    int row = 3; int col = 4;
    int i, j, count = 0;
    int **arr;

    // Pointers to each row
    arr = (int **) malloc(sizeof(int *) * row);
    // Entire array
    arr[0] = (int *) malloc(sizeof(int) * col * row);

    // Set pointers to correct place in memory
    for (i = 1; i < row; i++) {
        arr[i] = (arr[i-1] + col);
    }
    // Initalize the data
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            arr[i][j] = ++count;
        }
    }
    // Print the array
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }
    
    // Part 2: Free
    free(arr[0]); // Free enitre array
    free(arr); // Free pointers

    return 0;
}