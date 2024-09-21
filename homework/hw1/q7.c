// Question 7:
// In class we discussed the following program.

// #include <stdio.h>
// struct date {
// int d : 5;
// int m : 4;
// int y;
// };

// int main()
// {
// struct date dt = { 31, 12, 2020 };
// printf("Date is %d/%d/%d\n", dt.d, dt.m, dt.y);
// printf("%lu", sizeof(struct date));
// return 0;
// }
// This program has a problem. When I run the program I get the following output:

// Date is -1/-4/2020

// Describe why his program does not work properly and how to fix the problem. 

// The program doesnt work properly because the bitfield limitations for day and month. They were overflowing to negative. You can either fix this by making them unsinged ints, supporting the range of values or just allocating more bits.

#include <stdio.h>

struct date {
    unsigned int d : 5; // 5 bits
    unsigned int m : 4; // 4 bits
    int y;
};

int main() {
    struct date dt = { 31, 12, 2020 };
    printf("Date is %d/%d/%d\n", dt.d, dt.m, dt.y);
    printf("%lu", sizeof(struct date));
    return 0;
}