// file: ptrptr_ex.c
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
    int x = 7;
    int *xptr = &x; // pointer to x
    int **xptrptr = &xptr; // pointer to xptr
    printf("x: %d\n",x);
    printf("address of x: %p\n",xptr);
    printf("address of xptr: %p\n",xptrptr);
    printf("address of x via dereferencing xptrptr: %p\n",*xptrptr);
    printf("x via double-dereferencing xptrptr: %d\n",**xptrptr);

    return 0;
}
