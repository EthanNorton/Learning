// file: ptrptr_mystery.c
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
    char *str = "CS107";
    char **strptr = &str;

    char mystery = **strptr;
    printf("Mystery: %c\n",mystery);   
    return 0;
}
