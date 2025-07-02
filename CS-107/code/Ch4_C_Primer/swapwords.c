// file: swapwords.c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swapA(char **arr, int index_x, int index_y)
{
   char *tmp = *(arr + index_x);
   *(arr + index_x) = *(arr + index_y);
   *(arr + index_y) = tmp; 
}

void swapB(char **arr, int index_x, int index_y)
{
    char *tmp;
    memmove(&tmp, arr + index_x, sizeof(char *));
    memmove(arr + index_x, arr + index_y, sizeof(char *));
    memmove(arr + index_y, &tmp, sizeof(char *));
}

int main(int argc, char **argv)
{
    if (argc < 6) {
        printf("Usage:\n\t%s s1 s2 s3 s4 s5\n",argv[0]);
        return -1;
    }
    // assume:
    // ./swapwords apple banana orange peach pear
    swapA(argv,1,5); // swaps apple and pear 
    swapB(argv,2,3); // swaps banana and orange
    for (int i=1; i < argc; i++) { // skip progname
        printf("%s",argv[i]);
        i == argc - 1 ? printf("\n") : printf(", ");
    }
    return 0;
}
