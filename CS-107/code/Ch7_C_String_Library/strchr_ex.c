// file: strchr_ex.c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char **argv)
{
    if (argc < 3) {
        printf("usage\n\t%s word char\n",argv[0]);
        return -1;
    }
    char *word = argv[1];
    char ch = argv[2][0];

    printf("\"%s\" pointer: %p\n",word,word);
    printf("pointer to the first instance of %c in %s: %p\n",
            ch, word, strchr(word,ch));
    return 0;
}
