// file: swap.c
#include<stdio.h>
#include<stdlib.h>

void swap(int *x, int *y)
{
    int tmp = *x;
	*x = *y;
	*y = tmp;
}

int main()
{
    int a = 5;
    int b = 12;
    printf("a: %d, b: %d\n",a,b);
    swap(&a,&b);
    printf("a: %d, b: %d\n",a,b);
    return 0;
}

