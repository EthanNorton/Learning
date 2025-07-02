// file: memcpy_ex.c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char **argv)
{
    int src[] = {1,2,3,4,5};
    int nelems = sizeof(src) / sizeof(src[0]);

    int dest[nelems * sizeof(int)];

    memcpy(dest,src,nelems * sizeof(int));

    for (int i=0; i < nelems; i++) {
        printf("%d",dest[i]);
        i == nelems - 1 ? printf("\n") : printf(", ");
    }
    return 0;
}
