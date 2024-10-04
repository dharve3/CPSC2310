#include <stdio.h>
#include <limits.h>

int main()
{
    /*Value is 2147483647 = 0111 1111 1111 1111 1111 1111 1111 1111*/
    int i = INT_MAX;
    i++;
    /*0111 1111 1111 1111 1111 1111 1111 1111
     +                                      1
     ________________________________________
      1000 0000 0000 0000 0000 0000 0000 0000 = -2147483648*/

    printf("i = %d\n", i);

    /*Value is 4294967295 = 1111 1111 1111 1111 1111 1111 1111 1111*/
    unsigned j = UINT_MAX; 
    j++;
    /*
        1111 1111 1111 1111 1111 1111 1111 1111
        +                                     1
        ________________________________________
      1 0000 0000 0000 0000 0000 0000 0000 0000 = 0 the 1 is truncated because of 
                                                   the overflow.
    */

    printf("j = %u\n", j);

    /*Value is -2147483648*/
    i = INT_MIN;
    i--;
    /*1000 0000 0000 0000 0000 0000 0000 0000 = -2147483648
    -                                       1
    ___________________________________________
      0111 1111 1111 1111 1111 1111 1111 1111 = 2147483647*/  
    printf("i = %d\n", i);

    //remember j is unsigned
    j = 0; 
    j--;

    /*0000 0000 0000 0000 0000 0000 0000 0000  = 0 - 1 = -1
     
     -1 = 1111 1111 1111 1111 1111 1111 1111 1111 but j is unsigned so this is
       4294967295*/
    printf("j = %u\n", j);

    return 0; 
}