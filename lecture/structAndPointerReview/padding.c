#include <stdio.h>
#include <string.h>
 
 struct structure1 
{
       int id1;
       int id2;
       char name;
       char c;
       float percentage;
};
struct structure2 
{
       int id1;
       char name;
       char c;
       int id2;
       float percentage;                      
};
struct structure3 
{
       char name;
       char c;
       int id1;
       int id2;
       short percentage;                      
};
struct structure4 
{      
       char id1;
       char id2;
       char name;
       char c;
       char percentage;
};

int main() 
{
    struct structure1 a;
    struct structure2 b;
    struct structure3 c;
    struct structure4 d;
    
    printf("size of structure1 in bytes : %lu\n", sizeof(a));
    printf ( "\n   Address of id1        = %p", &a.id1 );
    printf ( "\n   Address of id2        = %p", &a.id2 );
    printf ( "\n   Address of name       = %p", &a.name );
    printf ( "\n   Address of c          = %p", &a.c );
    printf ( "\n   Address of percentage = %p\n", &a.percentage );
 
    printf("   \n\nsize of structure2 in bytes : %lu\n",sizeof(b));
    printf ( "\n   Address of id1        = %p", &b.id1 );
    printf ( "\n   Address of name       = %p", &b.name );
    printf ( "\n   Address of c          = %p", &b.c );
    printf ( "\n   Address of id2        = %p", &b.id2 );
    printf ( "\n   Address of percentage = %p\n\n",&b.percentage );

    printf("size of structure3 in bytes : %lu\n", sizeof(c));
    printf ( "\n   Address of name       = %p", &c.name );
    printf ( "\n   Address of c          = %p", &c.c );
    printf ( "\n   Address of id1        = %p", &c.id1 );
    printf ( "\n   Address of id2        = %p", &c.id2 );
    printf ( "\n   Address of percentage = %p\n\n",&c.percentage );

    printf("size of structure4 in bytes : %lu\n", sizeof(d));
    printf ( "\n   Address of id1        = %p", &d.id1 );
    printf ( "\n   Address of id2        = %p", &d.id2 );
    printf ( "\n   Address of name       = %p", &d.name );
    printf ( "\n   Address of c          = %p", &d.c );
    printf ( "\n   Address of percentage = %p\n", &d.percentage );       
    return 0;
}

/* 
size of structure1 in bytes : 16

   Address of id1        = 0x7ff7bdebb2f8
   Address of id2        = 0x7ff7bdebb2fc
   Address of name       = 0x7ff7bdebb300
   Address of c          = 0x7ff7bdebb301
   Address of percentage = 0x7ff7bdebb304
   

size of structure2 in bytes : 16

   Address of id1        = 0x7ff7bdebb2e8
   Address of name       = 0x7ff7bdebb2ec
   Address of c          = 0x7ff7bdebb2ed
   Address of id2        = 0x7ff7bdebb2f0
   Address of percentage = 0x7ff7bdebb2f4

size of structure3 in bytes : 16

   Address of name       = 0x7ff7bdebb2d8
   Address of c          = 0x7ff7bdebb2d9
   Address of id1        = 0x7ff7bdebb2dc
   Address of id2        = 0x7ff7bdebb2e0
   Address of percentage = 0x7ff7bdebb2e4

size of structure4 in bytes : 5

   Address of id1        = 0x7ff7bdebb2d0
   Address of id2        = 0x7ff7bdebb2d1
   Address of name       = 0x7ff7bdebb2d2
   Address of c          = 0x7ff7bdebb2d3
   Address of percentage = 0x7ff7bdebb2d4
*/
