// file: cast_lost_precision.c
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x = 53191;        // 53191
    short sx = (short) x; // -12345
    int y = sx;

	printf("x:  %d\n",x);
    printf("sx: %d\n",sx);
    printf("y:  %d\n",y);
    return 0;
}
