// file: heapalloc_ex1.c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char **argv)
{
    void *a, *b, *c, *d, *e, *f;
    a = malloc(16);
    memset(a,'a',16);

    b = malloc(8);
    memset(b,'b',8);

    c = malloc(24);
    memset(c,'c',16);

    d = malloc(16);
    memset(d,'d',16);

    free(a);
    free(c);

    e = malloc(8);
    memset(e,'e',8);

    b = realloc(b, 24);
    memset(b,'b',24);

    e = realloc(e, 24);
    memset(e,'e',24);

    f = malloc(24);
    memset(f,'f',24);

    free(b);
    free(d);
    free(e);
    free(f);

    return 0;
}
