// file: printf_generic.c
#include<stdio.h>
#include<stdlib.h>

void print_array(void *arr,size_t nelems,int width,void(*pr_func)(void *))
{
    for (int i=0; i < nelems; i++) {
        void *element = (char *)arr + i * width;
        pr_func(element);
        i == nelems - 1 ? printf("\n") : printf(", ");
    }
}

void print_int(void *arr)
{
    int i = *(int *)arr;
    printf("%d",i);
}

void print_long(void *arr)
{
    long l = *(long *)arr;
    printf("%lu",l);
}

int main(int argc, char **argv)
{
    int i_array[] = {0,1,2,3,4,5};
    size_t i_nelems = sizeof(i_array) / sizeof(i_array[0]);

    long l_array[] = {0,10,20,30,40,50};
    size_t l_nelems = sizeof(l_array) / sizeof(l_array[0]);

    print_array(i_array,i_nelems,sizeof(i_array[0]),print_int);
    print_array(l_array,l_nelems,sizeof(l_array[0]),print_long);

    return 0;
}
