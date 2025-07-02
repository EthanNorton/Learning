// file: buffer_overflow.c
#include<stdio.h>
#include<stdlib.h>

#define NUMS 1000

int main(int argc, char **argv)
{
    int arr[] = {0,1,2,3,4};
    for (int i=0; i < NUMS; i++) {
        printf("%d",*(arr + i));
        i == NUMS ? printf("\n") : printf(",");
    } 

    return 0;
}
