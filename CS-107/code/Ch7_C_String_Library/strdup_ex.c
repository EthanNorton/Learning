// file: strdup_ex.c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const int BYTES_TO_COPY = 3;

int main(int argc, char **argv)
{
    if (argc < 2) {
        printf("usage\n\t%s word\n",argv[0]);
        return -1;
    }
    char *word = argv[1];

    // remember to free these!
    char *word_copy = strdup(word);
    char *word_copy3 = strndup(word,BYTES_TO_COPY);

    printf("word: %s\n",word);
    printf("word_copy: %s\n",word_copy);
    printf("First %d letters of word: %s\n",BYTES_TO_COPY,word_copy3);

    // free the memory once no longer needed
    free(word_copy);
    free(word_copy3);

    return 0;
}
