// file: strstr_ex.c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char **argv)
{
    if (argc < 3) {
        printf("usage\n\t%s haystack needle\n",argv[0]);
        return -1;
    }
    char *haystack = argv[1];
    char *needle = argv[2];

    printf("\"%s\" pointer: %p\n",haystack,haystack);
    printf("pointer to the first instance of \"%s\" in %s: %p\n",
            needle, haystack, strstr(haystack,needle));
    return 0;
}
