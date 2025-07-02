// file: array.c
#include<stdio.h>
#include<stdlib.h>

void sizeof_test(int arr[]) {
    printf("sizeof(arr) in function: %lu\n", sizeof(arr));
}

int main()
{
    int arr[] = {1,3,4,2,7,9};

    printf("%d\n",arr[2]); // prints 4
    printf("%d\n",*(arr+5)); // prints 9

    // set the value of the third element
    arr[2] = 42;  
    printf("%d\n",arr[2]); // prints 42

    printf("sizeof(arr) in main: %lu\n",sizeof(arr));
    sizeof_test(arr);

    return 0;
}
