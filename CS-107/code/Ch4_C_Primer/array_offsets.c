// file: array_offsets.c
#include<stdlib.h>
#include<stdio.h>

void print_array(int *arr, size_t nelems)
{
    for (size_t i=0; i < nelems; i++) {
        printf("%d",arr[i]);
        i == nelems - 1 ? printf("\n") : printf(", ");
    }
}

int main()
{
    int values[] = {1,3,5,2,4,6};
    print_array(values,sizeof(values) / sizeof(values[0]));
    return 0;
}
