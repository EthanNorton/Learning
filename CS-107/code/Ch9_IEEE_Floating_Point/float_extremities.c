// file: float_extremities.c
#include<stdio.h>
#include<stdlib.h>
#include<float.h>

int main(int argc, char **argv)
{
    int flt_max_int_form = 0b01111111011111111111111111111111;
    int flt_min_int_form = 0b00000000100000000000000000000000;

    float flt_max = *((float *)&flt_max_int_form);
    float flt_min = *((float *)&flt_min_int_form);

    printf("flt_max: %g = %g\n",flt_max,FLT_MAX);
    printf("flt_min: %g = %g\n",flt_min,FLT_MIN);
    return 0;
}
