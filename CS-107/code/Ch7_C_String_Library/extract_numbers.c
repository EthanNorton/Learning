// file: extract_numbers.c
// purpose: print all numbers in the first 
// command line argument 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char **argv)
{
    char *s = argv[1];
    const char *digits = "0123456789";

    while (*s) { 
        // count how many digits are at the front of s
        size_t prefixDigits = strspn(s,digits);

        // copy just the initial digits
        char *numstr = strndup(s,prefixDigits);

        printf("%s\n",numstr);

        // clean up
        free(numstr);

        // update s
        s += prefixDigits + strcspn(s+prefixDigits,digits);
    }

    return 0;
}
