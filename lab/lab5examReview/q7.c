// What is the output of the following program?   

#include <stdio.h>

int f(int , int *, int **);

int main() {
    int c, *b, **a;
    c = 12;
    b = &c;
    a = &b;

    printf("RESULT: %d \n", f(c, b, a)); // 75
    return 0;
}

int f(int x, int *py, int **ppz) {
    printf("DEBUG: f called\n");
    printf("DEBUG: x=%d, *py=%d, **ppz=%d\n", x, *py, **ppz);
    int y, z, i;
    printf("DEBUG: y, z, i declared\n");
    **ppz += 3; // **ppz = 15
    z = **ppz; // z = 15
    printf("DEBUG: z=%d; **ppz=%d\n", z, **ppz);
    printf("DEBUG: *py=%d\n", *py);
    printf("DEBUG: entering for loop\n");
    for(i = 0; i < (x-6); i++) { // (12-6), 6 Iterations (i=0,1,2,3,4,5)
        printf("DEBUG: i=%d\n", i);
        *py += 4; // *py = 39
        printf("DEBUG: *py=%d\n", *py);
    }
    printf("DEBUG: exiting for loop\n");
    y = *py; // y = 39
    printf("DEBUG: y=%d; *py=%d\n", y, *py);
    x += 9; // x = 21
    printf("DEBUG: x=%d\n", x);
    printf("DEBUG: x + y + z = %d + %d + %d = %d\n", x, y, z, (x+y+z));
    return x + y + z;
}