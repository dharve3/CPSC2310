// Question 12:
// Consider the following program.  This program will print three values what are the values?

// #include <stdio.h>

// int main()
// {
// int arr[ 10 ] = {10,19,45,18,13,98,200,33,99,1};
// int * ptr = arr;
// printf("value of what ptr is pointing to: %d\n", *ptr);  
// int* ptr2 = ptr+5;
// printf("value of what ptr2+5 is pointing to: %d\n", *(ptr2));
// printf("value of what (ptr + 5) +2 is pointing to: %d\n", *(ptr+5)+2);

// return 0;
// }

// Print statement 1: value of what ptr is pointer to: _10_
// Print statement 2: value of what ptr2+5 is pointing to: _98_
// Print statement 3: value of what (ptr+ 5) + 2 is pointing to: _100_

#include <stdio.h>

int main() {
    int arr[ 10 ] = {10,19,45,18,13,98,200,33,99,1};
    int * ptr = arr;
    printf("value of what ptr is pointing to: %d\n", *ptr);  
    int* ptr2 = ptr+5;
    printf("value of what ptr2+5 is pointing to: %d\n", *(ptr2));
    printf("value of what (ptr + 5) +2 is pointing to: %d\n", *(ptr+5)+2);

    return 0;
}