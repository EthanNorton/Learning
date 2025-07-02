// file: dot_product.c
#include<stdio.h>
#include<stdlib.h>

long dot_prod(const long a[], const long b[], size_t nelems)
{
    long result = 0;
    for (size_t i=0; i < nelems; i++) {
        result += a[i] * b[i];
    }
    return result;
}
int main(int argc, char **argv)
{
    long a[] = {1,2,3};
    long b[] = {8,9,10};
    size_t nelems = sizeof(a) / sizeof(a[0]);
    printf("Dot product of a . b: %lu\n",dot_prod(a,b,nelems));  
    return 0;
}
