// Question 5:
// Consider the following struct:

// struct First
// {
//    short a;
//    float b;
//    char c;
//    int d;
//    int e;
// }; 

// Answer the following questions:
// What is the largest data type in this struct? Your answer should be a number only. _4_
// How many bytes of memory will be needed for this struct? Your answer should be a number only. _20_
// How many bytes of padding will be needed for this struct? Your answer should be a number only. _5_

#include <stdio.h>

struct First {
    short a; // 2
    float b; // 4
    char c; // 1
    int d; // 4
    int e; // 4
};


// MAIN IS FOR TESTING, not actually part of question:
int main() {
    struct First test;
    printf("Size of test: %lu\n", sizeof(test));
    printf("%lu, %lu, %lu, %lu, %lu\n", sizeof(test.a), sizeof(test.b), sizeof(test.c), sizeof(test.d), sizeof(test.e));

    return 0;
}