#include <stdio.h>

// A variable declaration like basic data types 
typedef struct Point 
{ 
    int x;
    int y; 
    int *z;
}point_t; 

int main() 
{ 
    point_t p1;
    printf("sizeof p1: %zu\n", sizeof(p1));
    printf("Address of p1.x %p\nAddress of p1.y %p\nAddress of p1.z %p\n", 
            &p1.x, &p1.y, &p1.z);
    struct Point p2; 
    printf("Address of p2: %p\nAddress of p2.x %p\n", &p2, &p2.x);
    struct Point *Ptr = &p2;
    printf("Value of Ptr (since it holds an address I will use %p)", Ptr);
    printf("Address of Ptr: %p\nValue of Ptr %p\n", &Ptr, Ptr);
    
    p1.x = 0;
    p1.y = 1;
    printf("%d %d\n", p1.x, p1.y);
    p2.x = 2; 
    p2.y = 4;
    printf("%d %d\n", p2.x, p2.y);
    Ptr->y = 5;
    /*Lines 36 and 38 do the same thing. This is saying go to where 
     *Ptr is pointing, which is p2 get the address of p2's x variable and
     *point z to that address. 
     *The -> is dereferencing Ptr, with the -> you do not need to use the "." 
     *when using -> to dereference. However, (*Ptr) is also dereferencing you
     *you still need to use '.' to access a member variable of the struct.*/
    //Ptr->z = &Ptr->x; //is the same as the next line.
    /*( )are necessary . has higher precedence*/
    (*Ptr).z = &(*Ptr).x; 
    printf("%d %d\n", p2.x, p2.y);
    //same as *(Ptr->z))
    printf("%d\n", *(*Ptr).z);

    (*Ptr).x = 10; 

    printf("%d %d\n", p2.x, Ptr->y);

    return 0;

}
