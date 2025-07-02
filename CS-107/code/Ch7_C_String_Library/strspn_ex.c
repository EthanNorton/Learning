// file: strspn_ex.c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char **argv)
{
    if (argc < 4) {
        printf("usage\n\t%s word accept reject\n",argv[0]);
        return -1;
    }
    char *word = argv[1];
    char *charset_accept = argv[2];
    char *charset_reject = argv[3];

    size_t strspn_count = strspn(word,charset_accept);
    size_t strcspn_count = strcspn(word,charset_reject);

    printf("The first %lu initial characters in \"%s\" are in \"%s\"\n",
            strspn_count, word, charset_accept);
    printf("The first %lu initial characters in \"%s\" are not in \"%s\"\n",
            strcspn_count, word, charset_reject);
    return 0;
}
