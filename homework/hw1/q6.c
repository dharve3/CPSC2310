// Question 6:
// This question is a follow up of the previous question.  
// Consider the following struct.

// struct First
// {
//    short a;
//    float b;
//    char c;
//    int d;
//    int e;
// }; 

// Rewrite this struct using the rule discussed in class that will minimize the number of bytes needed and push the padding to the end of the struct. 

#include <stdio.h>

struct First {
    float b; // 4
    int d; // 4
    int e; // 4
    short a; // 2
    char c; // 1
};


// MAIN IS FOR TESTING, not actually part of question:
int main() {
    struct First test;
    printf("Size of test: %lu\n", sizeof(test));
    printf("%lu, %lu, %lu, %lu, %lu\n", sizeof(test.a), sizeof(test.b), sizeof(test.c), sizeof(test.d), sizeof(test.e));

    return 0;
}