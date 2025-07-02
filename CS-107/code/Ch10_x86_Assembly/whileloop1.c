// file: whileloop1.c
#include<stdio.h>
#include<stdlib.h>

long fact_while(long n)
{
    long result = 1;
    while (n > 1) {
        result *= n;
        n = n - 1;
    }
    return result;
}

int main(int argc, char **argv)
{
    long x = 5;
    long x_fact = fact_while(x);
    printf("%ld! = %ld\n",x,x_fact);
    return 0;
}
