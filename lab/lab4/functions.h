#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#include <stdio.h>
#include <stdlib.h>

int** readFile(FILE* fp, int *size);
void printMatrix (int** mat, int num);

#endif