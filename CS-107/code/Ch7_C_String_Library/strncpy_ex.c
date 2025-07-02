// file: strncpy_ex.c
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

    // only copy up to one before the end
    strncpy(wordcopy,word,MAX_WORDLEN-1);
    // put a null at the end in case the word is too long
    wordcopy[MAX_WORDLEN-1] = '\0';

    printf("word: %s\n",word);
    printf("wordcopy: %s\n",wordcopy);
    return 0;
}
