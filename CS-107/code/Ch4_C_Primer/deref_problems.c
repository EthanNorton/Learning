// file: deref_problems.c
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
    if (argc < 2) {
        printf("usage\n\t%s address\n",argv[0]);
        return -1;
    }
    char *err;
    size_t address = strtoul(argv[1],&err,0); 
    printf("Let's see what int is at address %lx:\n",address);
    printf("%d\n",*(char *)address);
    return 0;
}
