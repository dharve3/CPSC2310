#include <stdio.h>
void f(int*, int);

int main()
{
  int i = 6, j = 2;
  f(&i, j);
  printf("i = %d j = %d\n", i, j); // i = 16, j = 2

  printf("%d\n", i + j); // 18

  return 0;
}

void f(int* p, int m)
{
  m = m + 8; // 10 (value)
  *p = *p + m; // 16 (reference)
}
