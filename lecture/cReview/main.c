#include <stdio.h>
#include "file1.h"
#include "file2.h"

int main()
{    
    printf("In main\n");
    printf("%d\n", add(1,2));
    printf("%d\n", subtract(1, 2));
    return 0;
}