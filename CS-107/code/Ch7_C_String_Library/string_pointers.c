// file: string_pointers.c
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
    if (argc < 2) {
        printf("usage\n\t%s string\n",argv[0]);
        return -1;
    }
    char *s1 = argv[1];
    char *s2 = s1; // not a copy!

    s1[0] = 'x';
    s2[1] = 'y';

    printf("address: %p, string:%s\n",s1,s1);
    printf("address: %p, string:%s\n",s2,s2);
    
    return 0;
}
