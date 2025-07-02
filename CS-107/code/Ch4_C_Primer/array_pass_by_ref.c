// file: array_pass_by_ref.c
#include<stdio.h>
#include<stdlib.h>

void scale(int array[], int factor, size_t nelems)
{
    for (size_t i = 0; i < nelems; i++) {
        array[i] *= factor;
    }
}
int main(int argc, char **argv)
{
    int arr[] = {1,2,3,4,5};
    size_t nelems = sizeof(arr) / sizeof(arr[0]);

    scale(arr,10,nelems);
    for (int i=0; i < nelems; i++) {
        printf("%d",*(arr + i));
        i == nelems - 1 ? printf("\n") : printf(",");
    }

    return 0;
}
