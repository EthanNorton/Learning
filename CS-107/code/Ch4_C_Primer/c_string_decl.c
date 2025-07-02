// file: c_string_decl.c
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char cstr1[] = "A string";
    char *cstr2  = "Another string";

    printf("cstr1: %s\n",cstr1);
    printf("cstr2: %s\n",cstr2); 
    return 0;
}
