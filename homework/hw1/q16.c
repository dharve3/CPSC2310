// Question 16:
// This is a problem that involves dynamically allocating memory in 1 dimension but accessing the data as if it were 2 dimensional. 
// Assume the following variables are created and initialized.
// int row = 3; int col = 4;
// int *data = malloc(row * col * sizeof(int));
// int i, j, count = 0;
// Fill in the appropriate information in the nested for loops to initialize the dynamically allocated memory for data: 
// for( i = 0; i < row; i++)
// {
// for(j = 0; j < col; j++)
//    {
//     data[__] =  ++count;
//    }

// What is the code to give the dynamically allocated memory back to the operating system? _free(data);_

#include <stdio.h>
#include <stdlib.h>

int main() {
    int row = 3; int col = 4;
    int *data = malloc(row * col * sizeof(int));
    int i, j, count = 0;

    for( i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            data[i * col + j] =  ++count;
        }
    }

    // Printing the data
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", data[i * col + j]);  // Print as if it's 2D
        }
        printf("\n");
    }

    free(data);

    return 0;
}