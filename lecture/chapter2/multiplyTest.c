#include <stdio.h>
#include <stdio.h>
#include <stdint.h>

int main()
{
    unsigned short ua = 0xffff;
    unsigned short ub = ua*ua; 
    
    printf ("unsigned short:\nua's value %u ub's value %u\n", ua,ub);

    /*unsigned short:
      ua's value 65535 ub's value 1*/

    short c = 0xffff;
    short d = c * c; 
    printf ("short:\nc's value %d d's value %d\n", c, d);

    /*short:
      c's value -1 d's value 1*/

    uint8_t ue = 0xff;
    uint8_t uf = ue*ue;
    printf ("uint8_t:\nue's value %u uf's value %u\n", ue, uf);

  /*uint8_t:
    ue's value 255 uf's value 1*/

    int8_t e = 0xff;
    int8_t f = e*e;
    printf ("int8_t:\ne's value %d f's value %d\n", e, f);
    /*int8_t:
      e's value -1 f's value 1*/
      
    return 0;

}
/*
unsigned short:
ua's value 65535 ub's value 1
short:
c's value -1 d's value 1
uint8_t:
ue's value 255 uf's value 1
int8_t:
e's value -1 f's value 1
*/