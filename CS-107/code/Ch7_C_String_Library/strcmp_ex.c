// file: strcmp_ex.c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char **argv)
{
    if (argc < 4) {
        printf("usage\n\t%s s1 s2 compar_len\n",argv[0]);
        return -1;
    }
    char *s1 = argv[1];
    char *s2 = argv[2];
    int cmplen = atoi(argv[3]);

    int cmp_result = strcmp(s1,s2);

    char *result_text;

    if (cmp_result == 0) {
        result_text = "is the same as";
    } else if (cmp_result < 0) {
        result_text = "comes before";
    } else {
        result_text = "comes after";
    }
    printf("String \"%s\" %s \"%s\" in the alphabet.\n",s1,result_text,s2);

    cmp_result = strncmp(s1,s2,cmplen);
    if (cmp_result == 0) {
        result_text = "is the same as";
    } else if (cmp_result < 0) {
        result_text = "comes before";
    } else {
        result_text = "comes after";
    }
    printf("Up to character %d, \"%s\" %s \"%s\" in the alphabet.\n",
            cmplen,s1,result_text,s2);

    return 0;
}
