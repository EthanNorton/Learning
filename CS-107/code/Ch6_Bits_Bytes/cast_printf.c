// file: cast_printf.c
#include<stdio.h>
#include<stdlib.h>

int main()
{
        int d = -1;
    unsigned int u = 1<<31;

    printf("d = %d = %u = %x\n", d, d, d);
    printf("u = %d = %u = %x\n", u, u, u);

    return 0;
}
