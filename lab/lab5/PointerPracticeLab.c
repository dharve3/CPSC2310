#include <stdio.h>

struct NODE{
    int a;
    struct NODE *b;
    struct NODE *c;
}nodes[5] = { 
                {15,    nodes + 2, nodes+1},
                {30,    nodes + 3, NULL},
                {46,    nodes + 1, nodes + 4},
                {95,    nodes + 4, nodes},
                {123,   NULL, nodes + 2}
    };
struct NODE* np = nodes + 4;
struct NODE** npp = &nodes[2].b;

int main()
{

    return 0;

}
