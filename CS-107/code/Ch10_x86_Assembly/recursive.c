// file: recursive.c
#include<stdio.h>
#include<stdlib.h>

long fib(long val)
{
    // base case
    if (val == 1 || val == 0) return 1;
    // recursive case
    else return fib(val-1) + fib(val-2);
}
int main(int argc, char **argv)
{
    if (argc < 2) {
        printf("usage:\n\t%s val\n",argv[0]);
        return 0;
    }
    long v = atol(argv[1]);

    printf("fib(%ld): %ld\n",v,fib(v)); 
    return 0;
}
