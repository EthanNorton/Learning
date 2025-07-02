// file: forloop1.c
#include<stdio.h>
#include<stdlib.h>

long fact_for(long n)
{
    long i;
    long result = 1;
    for (i = 2; i <= n; i++)
       result *= i;
    return result;
}

int main(int argc, char **argv)
{
    long x = 5;
    long x_fact = fact_for(x);
    printf("%ld! = %ld\n",x,x_fact);
    return 0;
}
