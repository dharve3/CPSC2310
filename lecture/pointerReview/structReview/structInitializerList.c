#include <stdio.h>

struct simple
{
    int a;
    char b;
    float c;
};
struct Init_Ex 
{
    int a;
    short b[10];
    struct simple c;
}test = {20, {1,2,3,4,5},{25, 'Y', 2.5}};

int main()
{
    struct simple s;
    printf("Size of s: %lu\n", sizeof(s) );
    //struct Init_Ex test = {20, {1,2,3,4,5},{25, 'Y', 2.5}};
    struct Init_Ex test2;
    //print specifier here can be lu or zu for sizeof
    printf("Size of test2: %lu\n", sizeof(test2) );
    printf("sizeof(test) %zu\n", sizeof(test));
    printf("address of a: %p\naddress of b: %p\naddress of c: %p\n", 
            &test2.a, &test2.b, &test2.c);
    printf("%d %d %d %c %f\n", test.a, test.b[6], test.c.a, test.c.b, test.c.c);
    printf("%d %d %d %c %f\n", test2.a, test2.b[0], test2.c.a, test2.c.b, test2.c.c);
    return 0;
}