// file: cast_no_lost_precision.c
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x = -3;
    short sx = (short) x;
    int y = sx;

	printf("x:  %d\n",x);
    printf("sx: %d\n",sx);
    printf("y:  %d\n",y);
    return 0;
}
