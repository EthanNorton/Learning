// file: stackargs.c
#include<stdio.h>
#include<stdlib.h>

long stackargs(long a1, int a2, short a3, long *a4,
               int *a5, short *a6, char a7, char *a8)
{
    long sum = a1 + a2 + a3 + *a4 + *a5 + *a6 + a7 + *a8;
    *a4 = *a5 = *a6 = 0;
    *a8 = 'y';
    return sum;
}
int main(int argc, char **argv)
{
    long  a = 0xabcdefabcdef;
    int   b = 0x1234567;
    short c = 0xabcd;
    char  d  = 'x';

    printf("%lx, %x, %x, %c\n",a,b,c,d);
    long sum = stackargs(a,b,c,&a,&b,&c,d,&d);
    printf("%lx, %x, %x, %c\n",a,b,c,d);
    printf("sum: %lx\n",sum);

    return 0;
}
