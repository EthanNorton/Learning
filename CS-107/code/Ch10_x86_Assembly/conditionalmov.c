// file: conditionalmov_prog.c
#include<stdio.h>
#include<stdlib.h>

int maxdifference_A(int a, int b)
{
    int diffab;
    if (a - b >= b - a) {
        diffab = a - b;
    } else {
        diffab = b - a;
    }
    return diffab;
}

int maxdifference_B(int a, int b)
{
    int diffab = a - b;
    int diffba = b - a;
    int maxab = diffab < diffba;
    if (maxab) diffab = diffba;

    return diffab;
}

int main(int argc, char **argv)
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    printf("max_diff_A: %d\n",maxdifference_A(a,b));
    printf("max_diff_B: %d\n",maxdifference_B(a,b));
    
    return 0;
}
