// file: pointer_compare.c
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
    char *s1 = argv[1];
    char *s2 = argv[2];

    // the following two lines do not compare
    // the two strings!
    if (s1 < s2) printf("%s is less than %s\n",s1,s2);
    if (s1 == s2) printf("%s is equal to %s\n",s1,s2);
    if (s1 > s2) printf("%s is greater than %s\n",s1,s2);

    printf("%s address: %p\n",s1,s1);
    printf("%s address: %p\n",s2,s2);
    
    return 0;
}
