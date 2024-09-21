// Question 20:
// This code does not swap the values of an and b. Explain why it does not work. Using the line numbers explain how to fix this code such that when it is ran it will swap the value of a and b. 

// 1.  void swap(int , int );

// 2.  int main(){
// 3.  int a = 5;
// 4.  int b = 10;
// 5.  swap(a, b);
// 6.  printf("a = %d b = %d\n", a, b);
// 7.  return 0;
// }
// 8.    void swap(int x, int y){
// 9.    int temp = x;
// 10.  x = y;
// 11.  y = temp;
// 12.  }

// This code doesn't work because the swap function is using pass by value instead of pass by reference. This code can be fixed if on line 5 you write swap(&a, &b);, passing by reference. Because of this, you also have to modify the funciton implementation and prototype on lines 1 and 9 to be integer pointers instead of regular integers. Lastly, in the function implementation on lines 10-12, you dereference x and y to modify the original values.

#include <stdio.h>

void swap(int *, int *);

int main() {
    int a = 5;
    int b = 10;
    swap(&a, &b);
    printf("a = %d b = %d\n", a, b);
    return 0;
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}