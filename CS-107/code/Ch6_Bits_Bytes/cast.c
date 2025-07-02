// file: cast.c
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char tx;
	unsigned char ux;

	tx = -5;
	ux = tx;

	printf("tx: %d\n",tx);
    printf("ux: %u\n",ux);
    return 0;
}
