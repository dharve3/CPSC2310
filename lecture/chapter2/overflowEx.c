#include<stdio.h>
#include<limits.h>

int main()
{
    int i = INT_MAX;
    unsigned int j = UINT_MAX;

    printf("i before increment: %d \n", i);
    i++;
    printf("i after increment: %d \n", i);
    i--;
    printf("i after decrement: %d \n", i);

    printf("j before increment: %u \n", j);
    j++;
    printf("j after increment: %u \n", j);
    j--;
    printf("j after decrement: %u\n", j);
    return 0;  
}
/*
i before increment: 2147483647 
i after increment: -2147483648 
i after decrement: 2147483647 
j before increment: 4294967295 
j after increment: 0 
j after decrement: 4294967295
*/