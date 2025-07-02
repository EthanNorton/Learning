// file: localstack.c
#include<stdio.h>
#include<stdlib.h>

int settomin(int *a, int *b)
{
    int aval = *a;
    int bval = *b;
    if (aval < bval) {
      *b = aval;
      return aval;
    } else {
      *a = bval;
      return bval;
    }
        
}

void setvals(int x, int y)
{
    printf("x:%d, y:%d\n",x,y);
    int min = settomin(&x,&y);
    printf("x:%d, y:%d, min:%d\n",x,y,min);
}

int main(int argc, char **argv)
{
    if (argc < 3) {
        printf("Usage:\n\t%s x y\n",argv[0]);
        return -1;
    }
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    setvals(x,y);
    return 0;
}
