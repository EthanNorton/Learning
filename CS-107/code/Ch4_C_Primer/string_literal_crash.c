// file: string_literal_crash.c
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
    char *s2 = "string literal with pointer";
    s2[0] = 'S'; // crashes here

    printf("s2: %s\n",s2);
    return 0;
}
