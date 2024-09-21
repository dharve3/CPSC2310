// Question 17:
// THIS IS A 2 PART QUESTION: 

// PART 1: Write the code to dynamically allocate memory for a 2D array of integers.  Hint think about the skit with the student pointers, pointing to groups of student data. 
// PART 2: Write the code to give the dynamically allocated memory back to the operating system.

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Part 1: Allocate
    int row = 3; int col = 4;
    int i;

    // Array of pointers (rows)
    int **arr = (int**) malloc(row * sizeof(int*));

    // Each row
    for (i = 0; i < row; i++) {
        arr[i] = (int*) malloc(col * sizeof(int*));
    }

    // Example: Initialize the array with some values
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            arr[i][j] = i * col + j + 1;  // Filling the array with values
        }
    }

    // Print the array
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("%d", arr[2][1]);

    // Part 2: Free
    for (int i = 0; i < row; i++) {
        free(arr[i]);  // Free each row
    }
    free(arr);  // Free pointers

    return 0;
}