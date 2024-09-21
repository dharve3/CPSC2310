// Question 14:
// What is the output of the following program?

// #include <stdio.h>

// int f(int , int *, int **);

// int main()
// {
// int c, *b, **a;
// c = 15;
// b = &c;
// a = &b;

// printf("%d \n", f(c, b, a));
// return 0;
// }

// int f(int x, int *py, int **ppz)
// {
// int y, z;
// (*(*ppz)) += 1;
// z = **ppz;
// *py += 5;
// y = *py;
// x += 2;
// return x + y + z;
// }

#include <stdio.h>

int f(int , int *, int **);

int main() {
    int c, *b, **a;
    c = 15;
    b = &c; // points to c
    a = &b; // points to b

    printf("%d \n", f(c, b, a)); // 54
    return 0;
}

int f(int x, int *py, int **ppz) {
    int y, z;
    (*(*ppz)) += 1; // 15+1 = 16
    z = **ppz; // z = 16
    *py += 5; // 16+5 = 21
    y = *py; // y = 21
    x += 2; // 15 + 2 = 17
    return x + y + z; // 17 + 21 + 16 = 54
}