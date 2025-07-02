// file: generic.c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swap_ends(void *arr, size_t nelems, int width)
{
    // allocate space for the copy
    char tmp[width];
    
    // copy the first element to tmp
    memmove(tmp,arr,width);

    // copy the last element to the first 
    memmove(arr,(char *)arr + (nelems - 1) * width,width);

    // copy tmp to the last element
    memmove((char *)arr + (nelems - 1) * width,tmp,width);
}

int main(int argc, char **argv)
{
    short s_array[] = {1,4,8,2,-3,5};
    size_t s_nelems = sizeof(s_array) / sizeof(s_array[0]);

    int i_array[]   = {10,40,80,20,-30,50};
    size_t i_nelems = sizeof(i_array) / sizeof(i_array[0]);

    long l_array[]  = {100,400,800,200,-300,500};
    size_t l_nelems = sizeof(l_array) / sizeof(l_array[0]);

    swap_ends(s_array,s_nelems,sizeof(s_array[0]));
    swap_ends(i_array,i_nelems,sizeof(i_array[0]));
    swap_ends(l_array,l_nelems,sizeof(l_array[0]));

    printf("s_array[0]:%d,\t",s_array[0]);
    printf("s_array[%lu]:%d\n",s_nelems - 1,s_array[s_nelems-1]);

    printf("i_array[0]:%d,\t",i_array[0]);
    printf("i_array[%lu]:%d\n",i_nelems - 1,i_array[i_nelems-1]);

    printf("l_array[0]:%lu,\t",l_array[0]);
    printf("l_array[%lu]:%lu\n",l_nelems - 1,l_array[l_nelems-1]);

    return 0;
}
