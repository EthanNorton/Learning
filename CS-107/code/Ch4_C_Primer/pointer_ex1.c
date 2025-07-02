// file: pointer_ex1.c
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
    int x = 7;
    int *xptr = &x; // pointer to x
    printf("x: %d\n",x);
    printf("address of x: %p\n",xptr);
    printf("x via dereferencing xptr: %d\n",*xptr);

    return 0;
}
