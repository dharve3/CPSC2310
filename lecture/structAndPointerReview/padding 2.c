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
       short percentage;                      
};
struct structure3 
{
       char name;
       char c;
       int id1;
       int id2;
       float percentage;                      
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
    printf ( "\n   Address of id2        = %p", &b.id2);
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

