// file: array_sizeof.c
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
    short values[] = {1, -1, 5, 2, -4, 8};

    printf("sizeof(values) = %lu\n",sizeof(values));
    printf("sizeof(values[0]) = %lu\n",sizeof(values[0]));

    return 0;
}
