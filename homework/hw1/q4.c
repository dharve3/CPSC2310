// Question 4:
// The following struct is broken.  Describe the problem and how to fix the problem. 

// typedef struct {
//    char a
//    struct SELF_REF *b;
//    int c;
// }SELF_REF;

// There is a missing semicolon after char a. Ignoring this,
// SELF_REF is called within the struct before it is defined.
// You would fix this by explicitly naming the struct before its fields (typedef struct SELF_REF)

#include <stdio.h>

typedef struct SELF_REF{
   char a;
   struct SELF_REF *b;
   int c;
}SELF_REF;


// MAIN IS FOR TESTING, not actually part of question:
int main() {
    SELF_REF test;

    return 0;
}