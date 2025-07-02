// file: loopjumps.c
#include<stdio.h>
#include<stdlib.h>

void loop()
{
    int i = 0;
    while (i < 100) {
        printf("i:%d\n",i);
        i++;
    }
}
int main(int argc, char **argv)
{
    loop();
    return 0;
}
