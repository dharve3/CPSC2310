/***********************
 * Dylan Harvey
 * dharve3@clemson.edu
 * Lab 5 Section 1
 **********************/

#include <stdio.h>

struct NODE{ // 24 total
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

    // for(int i = 0; i < 5; i++) {
    //     printf("nodes[%d]: %p\n", i, &nodes[i]); // Addrs
    //     printf("    %d, %p, %p\n", nodes[i].a, nodes[i].b, nodes[i].c); // Addrs
    // }
    // printf("np: %p, %d\n", np, *np);
    // printf("npp: %p, %p, %p\n", npp, *npp, **npp);

    // printf("%p\n", *nodes[0].b);

    // Checking my work
    // Used \t instead of just pressing tab
    printf("nodes\t%p\n", nodes); // 0x210
    // printf("nodes.a\t%p\n", nodes.a); // ILLEGAL, not a ptr to a
    printf("nodes[3].a\t%d\n", nodes[3].a); // 95
    printf("nodes[3].c\t%p\n", nodes[3].c); // 0x210
    printf("nodes[3].c->a\t%d\n", nodes[3].c->a); // 15
    // printf("*nodes.a\t%d\n", *nodes.a); // ILLEGAL, not a ptr
    printf("(*nodes).a\t%d\n", (*nodes).a); // 15
    printf("nodes->a\t%d\n", nodes->a); // 15
    printf("nodes[3].b->b\t%p\n", nodes[3].b->b); // NULL (0x000)
    printf("&nodes[3].a\t%p\n", &nodes[3].a); // 0x282
    printf("&nodes[3].c\t%p\n", &nodes[3].c); // 0x298 (282 + 8 + 8)
    printf("&nodes[3].c->a\t%p\n", &nodes[3].c->a); // 0x210
    printf("&nodes->a\t%p\n", &nodes->a); // 0x210
    printf("np\t%p\n", np); // 0x306
    printf("np->a\t%d\n", np->a); // 123
    printf("np->c->c->a\t%d\n", np->c->c->a); // 123
    printf("npp\t%p\n", npp); // 0x242 (0x234 + 8)
    // printf("npp->a\t%p\n", npp->a); // ILLEGAL, double ptr, not struct ptr
    printf("*npp\t%p\n", *npp); // 0x234
    // printf("*npp->a\t%d\n", *npp->a); // ILLEGAL, double ptr, not struct ptr
    printf("(*npp)->a\t%d\n", (*npp)->a); // 30
    printf("&np\t%p\n", &np); // DO NOT KNOW, ptr space allocated after struct, could be diff
    printf("&np->a\t%p\n", &np->a); // 0x306
    printf("&np->c->c->a\t%p\n", &np->c->c->a); // 0x306

    return 0;
}
