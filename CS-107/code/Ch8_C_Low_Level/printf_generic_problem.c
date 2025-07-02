// file: printf_generic_problem.c
#include<stdio.h>
#include<stdlib.h>

void print_array(void *arr,size_t nelems,int width)
{
    for (int i=0; i < nelems; i++) {
        void *element = (char *)arr + i * width;
        printf("%?",element); // what goes in place of the ?
        i == nelems - 1 ? printf("\n") : printf(", ");
    }
}

int main(int argc, char **argv)
{
    int i_array[] = {0,1,2,3,4,5};
    size_t i_nelems = sizeof(i_array) / sizeof(i_array[0]);

    int l_array[] = {0,10,20,30,40,50};
    size_t l_nelems = sizeof(l_array) / sizeof(l_array[0]);

    print_array(i_array,i_nelems,sizeof(i_array[0]));
    print_array(l_array,l_nelems,sizeof(l_array[0]));

    return 0;
}
