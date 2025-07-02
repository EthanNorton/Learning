// file: ptr_arith.c
#include<stdio.h>
#include<stdlib.h>

//#define ARRTYPE int
//#define ARRTYPE long 
#define ARRTYPE char 

int main(int argc, char **argv)
{
    ARRTYPE arr[] = {1,2,3,4,5,6};
    ARRTYPE *arrptr = arr; // arr decays to a pointer

    printf("%p\n",arrptr);
    printf("%p\n",arrptr+1);
    printf("%p\n",arrptr+2);
    printf("%p\n",arrptr+3);
    printf("%p\n",arrptr+4);
    printf("%p\n",arrptr+5);
    return 0;
}
