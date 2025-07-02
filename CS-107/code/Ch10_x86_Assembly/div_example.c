// file: div_example.c
#include<stdio.h>
#include<stdlib.h>

long divide_with_remainder(long x, long y, long *rem)
{
    *rem = x % y;
    return x / y;
}

int main(int argc, char **argv)
{
    long x = strtol(argv[1],NULL,0); 
    long y = strtol(argv[2],NULL,0); 
    long remainder;
    long quotient = divide_with_remainder(x,y,&remainder);
    printf("%ld / %ld = %ld remainder %ld\n",x,y,quotient,remainder);
    return 0;
}
