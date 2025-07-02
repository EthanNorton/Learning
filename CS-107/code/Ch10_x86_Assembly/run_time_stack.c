// file: run_time_stack.c
#include<stdio.h>
#include<stdlib.h>

int leaf(int x)
{
    x *= 3;
    return x;
}

int first_function(int a)
{
    a--;
    a = leaf(a);
    return a;
}
int main(int argc, char **argv)
{
    int n = 10;
    n = first_function(n);
    printf("n: %d\n",n); 
    return 0;
}
