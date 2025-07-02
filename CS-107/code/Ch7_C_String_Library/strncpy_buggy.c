// file: strncpy_buggy.c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const int MAX_WORDLEN = 5;

int main(int argc, char **argv)
{
    if (argc < 2) {
        printf("usage\n\t%s word\n",argv[0]);
        return -1;
    }
    char *word = argv[1];
    char wordcopy[MAX_WORDLEN]; 

    strncpy(wordcopy,word,MAX_WORDLEN);

    printf("Note: this program has a bug!\n");
    printf("word: %s\n",word);
    printf("wordcopy: %s\n",wordcopy);
    return 0;
}
