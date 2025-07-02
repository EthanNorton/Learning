// file: double_comparisons_epsilon.c
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

const float EPSILON = 0.001; // 1 %

int main(int argc, char **argv)
{
    double a = 0.1;
    double b = 0.2;
    double c = 0.3;
    double d = a + b;

    printf("a (0.1): %.30g\n",a);
    printf("b (0.2): %.30g\n",b);
    printf("c (0.3): %.30g\n",c);
    printf("d (0.3): %.30g\n",d);

    float max_cd_percent = fmax(fabs(c),fabs(d)) * EPSILON;
    float diff_cd = fabs(c-d);
    
    printf("c == d? %s\n", (diff_cd <= max_cd_percent) ? "true" : "false");
    printf("c < d?  %s\n", (diff_cd <= max_cd_percent) ? "false" : "true");
    return 0;
}
