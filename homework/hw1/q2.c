// Question 2:
// Consider the following structs:

// struct simple{
//    int a;
//    char b; 
//    float c;
// };

// struct Init{
//    int a
//    short b[10]
//    struct simple c;
// };

// Rewrite struct Init, such that during the creation of the struct it will initialize an instance of Init using an initialization list.

#include <stdio.h>

struct simple {
   int a;
   char b; 
   float c;
};

struct Init {
   int a;
   short b[10];
   struct simple c;
}test = {20, {1,2,3,4,5}, {25, 'Y', 2.5}};


// MAIN IS FOR TESTING, not actually part of question:
int main() {
    struct simple s;
    printf("Size of s: %lu\n", sizeof(s));
    // struct Init test; // DONT OVERWRITE initalized list
    printf("Size of test: %lu\n", sizeof(test));
    struct Init test2;
    printf("Size of test2: %lu\n", sizeof(test2));

    // printf("s: %d %c %f\n", s.a, s.b, s.c); // Never initalized, unexpected behavior
    printf("test: %d %d %d %c %f\n", test.a, test.b[0], test.c.a, test.c.b, test.c.c);
    printf("test2: %d %d %d %c %f\n", test2.a, test2.b[0], test2.c.a, test2.c.b, test2.c.c);
    
    return 0;
}