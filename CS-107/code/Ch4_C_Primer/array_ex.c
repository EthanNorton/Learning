// file: array_ex.c
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
    short values[] = {1, -1, 5, 2, -4, 8};

    int nelems = sizeof(values) / sizeof(values[0]);

    for (int i=0; i < nelems; i++) {
        printf("%d",values[i]);
        i == nelems -1 ? printf("\n") : printf(", "); 
    }
    return 0;
}
