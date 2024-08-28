#include<stdio.h>

/*The call to f in main) passing in ip and ij by value(copies are made)does not
 *change where ip points outside of f.  It will only change in f.
 *In a function you can change the value of what the pointer is
 *pointing to but unless you pass the pointer to the function as a
 *double pointer you cannot change where the pointer points to
 *outside of the function. What happens in the function stays
 *in the function*/

void f(int *p, int *q)
{
  printf("inside f ; p is pointing to this address %p\n", p);
  printf("inside f ; q is pointing to this address %p\n", q);
  /*This means p is pointing to the same thing q points to
   *as long as we are inside the function 'f'but once this function
   *is done p*/
  p = q; 
  printf("inside f and after p = q ; p is pointing to this address %p\n", p);
  *p = 2;
}

int main()
{
  int i = 0, j = 1;
  int *ip = &i;
  int *ij = &j;
  printf("Before calling f - ip is pointing to this address %p\n", ip); 
  f(ip, ij);
  printf("After calling f - ip is pointing to this address %p\n", ip);
  printf("%d %d and %d %d\n", i, j, *ip, *ij);

  
  return 0;
}

