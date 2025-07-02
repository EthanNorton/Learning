// file: fraction.c
#include<stdio.h>
#include<stdlib.h>

struct fraction {
    int numerator;
    int denominator;
};

struct fraction multiply(struct fraction *a, struct fraction *b);
void printfrac(struct fraction *f);
int gcd(int a, int b);

int main(int argc, char **argv)
{
    struct fraction f1 = {1,2}; // 1/2
    struct fraction f2 = {2,3}; // 2/3

    printfrac(&f1);
    printfrac(&f2);

    struct fraction f3 = multiply(&f1,&f2);
    printfrac(&f3);

    return 0;
}

struct fraction multiply(struct fraction *a, struct fraction *b)
{
    struct fraction f;
    f.numerator = a->numerator * b->numerator;    
    f.denominator = a->denominator * b->denominator;
    
    // reduce
    int fgcd = gcd(f.numerator,f.denominator);
    f.numerator /= fgcd;
    f.denominator /= fgcd; 
    return f;
}

void printfrac(struct fraction *f)
{
    printf("%d/%d\n",f->numerator,f->denominator);
}

int gcd(int a, int b)
{
  if (a==0) return b;
  return gcd(b%a,a);
}
