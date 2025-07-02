// file: rawbytes.c
#include<stdio.h>
#include<stdlib.h>

void printbytes(const void *arr, size_t size)
{
    for (size_t i = 0; i < size; i++) {
        printf("%x",*((unsigned char *)arr + i));
        i == size-1 ? printf("\n") : printf(", ");
    }
}

int main(int argc, char **argv)
{
    // create buffer to hold longs
    long buffer[argc-1];

    // convert command line args to longs
    for (int i=1; i < argc; i++) {
        buffer[i-1] = atol(argv[i]);
    }

    // print the raw bytes
    printbytes(buffer, (argc-1) * sizeof(long));

    return 0;
}

