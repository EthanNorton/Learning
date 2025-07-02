// file: assign_array_to_pointer.c
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
    int arr[3] = {1,2,3};
    int *arrptr = arr;
    arrptr = &arr[0]; // also works
    printf("%p\n",arrptr);
    printf("%p\n",arr);
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr); // also works, but try to avoid this
    return 0;
}

