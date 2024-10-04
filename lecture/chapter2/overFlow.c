#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int main()
{
    //11010011 = -45
    int8_t x = -45;

    //What is the range of an 8 bit signed data? 
    //-(2^(8-1)) to (2^(8-1) - 1) = -128 to 127
    //11110101 actually = -11 (-256 + 245 = -11 or 256 - 245 = 11 = -11)
    //you can calculate the bit values -128 + 64+32+16 +4 + 1  = -11)
    int8_t y = 245; 


    /*Now lets add the two binary numbers:
     * 11010011
     *+11110101
       --------
      111001000 
      111001000
      The value of this number is -256 + 128 + 64 + 8 = -56 
    */

    printf("x + y = %d\n", (x + y));

    return 0;
}