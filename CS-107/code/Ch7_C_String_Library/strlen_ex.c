// file: strlen_ex.c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char **argv)
{
    if (argc < 2) {
        printf("usage\n\t%s word\n",argv[0]);
        return -1;
    }
    printf("argv[1], \"%s\", has a length of %zu characters.",
            argv[1],strlen(argv[1]));
    return 0;
}
