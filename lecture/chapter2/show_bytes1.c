#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*This program came from the course book. 
 *I have added comments to explain some concepts and/or what the program is 
 *doing.*/

/*using typedef in this case allows us to create a datatype called byte_pointer
 *which is an unsigned char pointer. (unsigned char*) So now I can create
 *a variable of type byte_pointer which really is a unsigned char* */
typedef unsigned char* byte_pointer;

/*This function is given an address of a sequence of bytes, indicated by 
 *byte_pointer (start) and a data type size (number of bytes) len.  Notice len
 *is of type size_t. This guarentees len will not be negative. 
 "size_t is unsigned integral data type. It is used to represent the size of 
 *objects in bytes. It is guarenteed to be big enough to contain the size of 
 *the biggest object the host system can handle."  
 *https://www.geeksforgeeks.org/size_t-data-type-c-language/
 *
 *This funtion basically will print the hexadecimal number in the order the 
 *bytes are stored.  This will allow us to determine byte ordering.*/
void show_bytes(byte_pointer start, size_t len) {
    
    /*If I change %.2X to %.2x the a - f in hex will be lower case letters.*/
    size_t i;
    for (i = 0; i < len; i++)
	    printf(" %.2X", start[i]);
    printf("\n");
}
/*This prints the byte ordering of an integer*/
void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int)); 
}
/*This shows the byte ordering of a long*/
void show_long(long x) {
    show_bytes((byte_pointer) &x, sizeof(long));
}
/*This shows the byte ordering of a short*/
void show_short(short x) {
    show_bytes((byte_pointer) &x, sizeof(short));
}
/*This shows the byte ordering of a double*/
void show_double(double x) {
    show_bytes((byte_pointer) &x, sizeof(double));
}
/*This shows the byte ordering of a float*/
void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(float)); 
}
/*This shows the byte ordering of a pointer*/
void show_pointer(void *x) {
    show_bytes((byte_pointer) &x, sizeof(void *)); 
}

/*Calls functions to print the bytes of an int, float, and pointer*/
void test_show_bytes(int val) {
    int ival = val;
    float fval = (float) ival;
    int *pval = &ival;
    show_int(ival);
    show_float(fval);
    show_pointer(pval);
}


int main(int argc, char *argv[])
{
    
    /*We must remember characters have hexadecimal representation, look at the 
     *ascii table.  */
    int itest[5] = {123456, 3456,56789, 2147483647, 2};
    /*ASCII in hex for fedcba is 66 65 64 63 62 61 */
    const char *s = "fedcba";
    /*ASCII in hex for a b c d e f is 61 62 63 64 65 66
     *ASCII in hex for f g h i is 66 67 68 69
     *ASCII in hex for j k l m n is 6A 6B 6C 6D 6E*/
    char test[3][10] = {{'a','b','c','d','e','f'}, 
                        {'f','g','h','i'}, 
                        {'j','k','l','m','n'}}; 

    //123456 in hex is 0001E240
    show_int(123456);
    //What is the hex of 3456?
    show_int(itest[1]);
    //What is the hex of 56789?
    show_int(itest[2]);
    //2147483647 in hex is 7FFFFFFF or 7fffffff
    show_int(itest[3]);
    //what is the hex of 2?
    show_int(itest[4]);

    /*chars are only one byte. However we are printing all of them plus the null*/
    show_bytes((byte_pointer) s, strlen(s)+1);
    /*We need to use strlen to get the sizes of the strings pointed to by test 
     *subscriptd 0, 1, and 2. The + 1 is for the null character*/
    show_bytes((byte_pointer) test[0],  strlen(test[0])+1);
    show_bytes((byte_pointer) test[1],  strlen(test[1])+1);
    show_bytes((byte_pointer) test[2],  strlen(test[2])+1);
   
    return 0;
}
/*
40 E2 01 00
 80 0D 00 00
 D5 DD 00 00
 FF FF FF 7F
 02 00 00 00
 66 65 64 63 62 61 00
 61 62 63 64 65 66 00
 66 67 68 69 00
 6A 6B 6C 6D 6E 00
*/