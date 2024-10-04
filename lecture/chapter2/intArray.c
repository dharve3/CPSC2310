#include <stdio.h>
void test_int(int*);
void test_short(short*);
void test_double(double* dArr);
int main()
{   
    int i = 0;

    int arr[5];
    short sArr[5];
    double dArr[5];

        test_int(arr);
        printf("\n");
        test_short(sArr);
        printf("\n");
        test_double(dArr);   
    return 0;
}

void test_int(int* arr)
{
    int i;
    printf("sizeof int %lu\n", sizeof(int));
    for(i = 0; i < 5; ++i)
        printf("address of arr[%d]: %p\n", i, &arr[i]);
    
}

void test_double(double* dArr)
{
    int i;
    printf("sizeof double %lu\n", sizeof(double));
    for(i = 0; i < 5; ++i)
        printf("address of dArr[%d]: %p\n", i, &dArr[i]);
}
void test_short(short* arr)
{
    int i;
    printf("sizeof short %lu\n", sizeof(short));
    for(i = 0; i < 5; ++i)
        printf("address of sArr[%d]: %p\n", i, &arr[i]);
    
}