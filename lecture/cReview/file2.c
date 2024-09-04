#include <stdio.h>
#include "file1.h"
#include "file2.h"
int subtract(int a, int b)
{
    int c = add(a,b);
    return b - a;
}

void printSub()
{
    printf("%d ", subtract(5, 10));
}