// file: swapgeneric.c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swap_generic(void *arr, int index_x, int index_y, int width)
{
    char tmp[width];
    void *x_loc = (char *)arr + index_x * width;
    void *y_loc = (char *)arr + index_y * width;

    memmove(tmp, x_loc, width);
    memmove(x_loc, y_loc, width);
    memmove(y_loc, tmp, width);
}

int main(int argc, char **argv)
{
    if (argc < 6) {
        printf("Usage:\n\t%s s1 s2 s3 s4 s5\n",argv[0]);
        return -1;
    }
    // assume:
    // ./swapwords apple banana orange peach pear
    swap_generic(argv,1,5,sizeof(argv[0])); // swaps apple and pear 
    swap_generic(argv,2,3,sizeof(argv[0])); // swaps banana and orange
    for (int i=1; i < argc; i++) { // skip progname
        printf("%s",argv[i]);
        i == argc - 1 ? printf("\n") : printf(", ");
    }
    return 0;
}
