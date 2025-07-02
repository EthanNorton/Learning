// file: ctypedemo.c
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(int argc, char **argv)
{
    char *string = argv[1];

    // count alpha characters, digits, 
    // whitespace, and punctuation
    int alphacount = 0;
    int digitcount = 0;
    int spacecount = 0;
    int punctcount = 0;
    int total = 0;
    int i = 0;
    while (string[i] != 0) {
       if (isalpha(string[i])) alphacount++;
       if (isdigit(string[i])) digitcount++;
       if (isspace(string[i])) spacecount++;
       if (ispunct(string[i])) punctcount++;
       total++;
       i++;
    }
    printf("Alphabetic characters: %d\n",alphacount);
    printf("Digits: %d\n",digitcount);
    printf("Spaces: %d\n",spacecount);
    printf("Punctuation: %d\n",punctcount);
    printf("Total characters: %d\n",total);

    // convert to uppercase
    while (*string) {
        if (isalpha(*string)) {
            printf("%c",toupper(*string));
        } else {
            printf("%c",*string);
        }
        string++;
    }
    printf("\n");
    return 0;
}
