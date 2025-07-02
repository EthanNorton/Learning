// file: swap2.c
#include<stdio.h>
#include<stdlib.h>

void swap2(int **x, int **y)
{
    int *tmp = *x;
	*x = *y;
	*y = tmp;
}

int main()
{
    int arr[] = {5, 12};

    int *aptr = &arr[0];
    int *bptr = &arr[1];

    printf("a: %d, b: %d\n",*aptr,*bptr);
    swap2(&aptr,&bptr);
    printf("a: %d, b: %d\n",*aptr,*bptr);
    return 0;
}

