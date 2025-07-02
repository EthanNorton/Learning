// file: piazza_question.c
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int m = 0;
    int n = 1;

    void *x = &m;
    void *y = &n;

    printf("x - y: %lu\n",x - y);

    return 0;
}
