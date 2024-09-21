// Question 3:
// Consider the following struct:

// struct  test{
//    int a
//    struct test b;
//    char c;
// };

// This struct is broken. Explain why it is broken and how to fix it.

// For starters, there is a missing semicolon after int a. 
// Ignoring this, this struct is being recursively defined, as struct test is defined within itself, this would be infinitely large.
// To fix this, you could make 'b' a pointer, to reference another test object rather than recursively define one.

#include <stdio.h>

struct test{
   int a;
   struct test *b;
   char c;
};


// MAIN IS FOR TESTING, not actually part of question:
int main() {
    struct test test1;

    return 0;
}