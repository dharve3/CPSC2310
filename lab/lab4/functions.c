#include "functions.h"

int** readFile(FILE* fp, int *size)
{
    fscanf(fp, "%d", size); // size is ptr, why take address?
    int num = *size;
    int index = 0;
    
    int** mat = (int**)malloc(num * sizeof(int*)); // sizeof int ptr rather than size
    for(index = 0; index < num; index++)
        mat[index] = (int*)malloc(num * sizeof(int)); 

    int row = 0; 
    int col = 0;
    for(; row < num; row++)
    {
        for(; col < num; col++)
        {
            fscanf(fp, "%d", &mat[row][col]);
        }
    }
    return mat;
}


void printMatrix (int** mat, int num)
{
    int row = 0; 
    int col = 0;
    for(row = 0; row < num; row++)
    {
        for(col = 0; col < num; col++)
        {
            printf("%.2d\t", mat[row][col]);
        }
        printf("\n");
    }
    
}

int calculateVal(int ** mat, int size) {
    int total = 0;

    for (int r = 0; r < size; r++) {
        for (int c = 0; c < size; c++) {
            if(!isLeftDiagonal(r, c) && !isRightDiagonal(size, r, c)) {
                total += mat[r][c];
            }
        }
    }

    return total;
}

bool isRightDiagonal(int size, int row, int col) {
    return (row + col) == (size - 1);
}

bool isLeftDiagonal(int row, int col) {
    return row == col;
}