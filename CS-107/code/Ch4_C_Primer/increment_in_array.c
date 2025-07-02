// file: increment_in_array.c
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
    int arr[] = {8,2,7,14,-5,42};
    int nelems = sizeof(arr) / sizeof(arr[0]);

    int *arrptr = arr; // arr now points to the 8
    
    // increment all values in array
    for (int i=0; i < nelems; i++) {
        (*arrptr)++;
        arrptr++;
    }

    for (int i=0; i < nelems; i++) {
        printf("%d",arr[i]); // we need to unpack this!
        i == nelems - 1 ? printf("\n") : printf(", ");
    }
    return 0;
}
