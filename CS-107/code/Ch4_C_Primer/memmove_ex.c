// file: memmove_ex.c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char **argv)
{
    int arr[] = {1,2,3,4,5};
    int nelems = sizeof(arr) / sizeof(arr[0]);

    memcpy(arr,arr+2, 3 * sizeof(int));

    for (int i=0; i < nelems; i++) {
        printf("%d",arr[i]);
        i == nelems - 1 ? printf("\n") : printf(", ");
    }
    return 0;
}
