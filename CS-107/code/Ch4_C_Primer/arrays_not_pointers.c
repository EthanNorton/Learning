// file: arrays_not_pointers.c
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
    int arr[3] = {1,2,3};
    int a = 4;
    arr = &a; // produces compile error
    return 0;
}
