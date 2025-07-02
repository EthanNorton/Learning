// file: pointer_to_array1.c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swapA(int *arr, int index_x, int index_y)
{
   int tmp = *(arr + index_x);
   *(arr + index_x) = *(arr + index_y);
   *(arr + index_y) = tmp; 
}

void swapB(int *arr, int index_x, int index_y)
{
    int tmp;
    memmove(&tmp, arr + index_x, sizeof(int));
    memmove(arr + index_x, arr + index_y,sizeof(int));
    memmove(arr + index_y, &tmp,sizeof(int));
}

int main(int argc, char **argv)
{
    int arr[] = {8,2,7,14,-5,42};
    swapA(arr,0,5); // swaps 8 and 42
    swapB(arr,1,2); // swaps 2 and 7 
    int nelems = sizeof(arr) / sizeof(arr[0]);
    for (int i=0; i < nelems; i++) {
        printf("%d",arr[i]);
        i == nelems - 1 ? printf("\n") : printf(", ");
    }
    return 0;
}
