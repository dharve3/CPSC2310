/*
 * Dylan Harvey
 * CPSC2310 Fall 2024
 * UserName: dharve3
 * Instructor: Dr. Yvon Feaster
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int** readFile(FILE* fp, int *size);
void printMatrix (int** mat, int num);

int calculateVal(int ** mat, int size);
bool isRightDiagonal(int size, int row, int col);
bool isLeftDiagonal(int row, int col);

#endif