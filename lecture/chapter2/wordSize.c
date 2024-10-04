#include <stdio.h>

int main()
{
    long int a = 10;
    printf("sizeof(char*) %lu\n", sizeof(char*));
    printf("sizeof(int*) %lu\n", sizeof(int*));
    printf("sizeof(float*) %lu\n", sizeof(float*));
    printf("sizeof(double*) %lu\n", sizeof(double*));
    printf("long int %lu\n", sizeof(a));
    return 0;
}
