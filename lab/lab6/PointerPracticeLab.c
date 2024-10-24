#include <stdio.h>

struct NODE{ // 24
    int a; // 4 (4)
    struct NODE *b; // 8
    struct NODE *c;// 8
}nodes[5] = { // 0x210
                {15,    nodes + 2, nodes+1}, // 0x210
                {30,    nodes + 3, NULL}, // 0x234
                {46,    nodes + 1, nodes + 4}, // 0x258
                {95,    nodes + 4, nodes}, // 0x282
                {123,   NULL, nodes + 2} // 0x306
    };
struct NODE* np = nodes + 4;
struct NODE** npp = &nodes[2].b;

int main()
{
    // printf("sizeof: NODE: %lu, a: %lu, b: %lu, c: %lu\n", sizeof(struct NODE), sizeof(nodes[0].a), sizeof(nodes[0].b), sizeof(nodes[0].c));
    for(int i = 0; i < 5; i++) {
        printf("nodes[%d]: %p\n", i, &nodes[i]); // Addrs
        printf("    %d, %p, %p\n", nodes[i].a, nodes[i].b, nodes[i].c); // Addrs
    }
    printf("np: %p, %d\n", np, *np);
    printf("npp: %p, %p, %p\n", npp, *npp, **npp);

    // printf("%p\n", *nodes[0].b);

    return 0;
}
