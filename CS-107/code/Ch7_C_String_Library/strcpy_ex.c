// file: strcpy_ex.c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char **argv)
{
    if (argc < 2) {
        printf("usage\n\t%s word\n",argv[0]);
        return -1;
    }
    char *word = argv[1];
    // +1 necessary below for terminating null byte
    char wordcopy[strlen(word)+1]; 

    strcpy(wordcopy,word);
    word[0] = 'x';
    wordcopy[0] = 'y';

    printf("word: %s\n",word);
    printf("wordcopy: %s\n",wordcopy);
    return 0;
}
