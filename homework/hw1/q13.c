// Question 13:
// What will print for each print statement?
// #include <stdio.h>

// int main()
// {
//    int iArr[] = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
//    int *iPtr = iArr;

//    printf("%d", iPtr[ 0 ]);
//    printf("%d", iPtr[ 0 ] +1);
//    printf("%d", *(iPtr+5));
//    printf("%d", *(iPtr+3)+5);
//    printf("%d", *(iPtr+2));

// return 0;
// }


#include <stdio.h>

int main()
{
   int iArr[] = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
   int *iPtr = iArr;

   printf("%d", iPtr[ 0 ]); // 0
   printf("%d", iPtr[ 0 ] +1); // 1

   printf("%d", *(iPtr+5)); // 10
   printf("%d", *(iPtr+3)+5); // 11
   printf("%d", *(iPtr+2)); // 4

return 0;
}