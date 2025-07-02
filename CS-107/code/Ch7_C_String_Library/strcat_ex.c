// file: strcat_ex.c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const int MAX_CPY = 3;

int main(int argc, char **argv)
{
    if (argc < 3) {
        printf("usage\n\t%s word1 word2\n",argv[0]);
        return -1;
    }
    char *word1 = argv[1];
    char *word2 = argv[2];

    size_t total_len = strlen(word1) + strlen(word2);
    // word1cpy_a will hold word1 + word 2,
    // so we need an extra byte
    char word1cpy_a[total_len+1];

    // word1cpy_b will hold word1 + 3 bytes of word2,
    // and we need an extra byte for the null
    char word1cpy_b[strlen(word1)+MAX_CPY+1];
    strcpy(word1cpy_a,word1);
    strcpy(word1cpy_b,word1);
    
    strcat(word1cpy_a,word2);
    strncat(word1cpy_b,word2,MAX_CPY);

    printf("%s + %s = %s\n",word1,word2,word1cpy_a);
    printf("%s + first %d bytes of %s = %s\n",
            word1,MAX_CPY,word2,word1cpy_b);
    
    return 0;
}
