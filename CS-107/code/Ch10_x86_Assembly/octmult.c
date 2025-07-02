// file: octmult.c
#include<stdio.h>
#include<stdlib.h>

// multiply64
// x : the first multiplicand
// y : the second multiplicand
// result : a pointer to an array of 2 longs
//          that will be in little-endian format
void multiply64(unsigned long x, unsigned long y, unsigned long *result);

int main(int argc, char **argv)
{
    unsigned long x = strtol(argv[1],NULL,0);
    unsigned long y = strtol(argv[2],NULL,0);
    
    unsigned long result[] = {0,0};

    multiply64(x,y,result);

    printf("0x%016lx%016lx\n",result[1],result[0]);
    return 0;
}
