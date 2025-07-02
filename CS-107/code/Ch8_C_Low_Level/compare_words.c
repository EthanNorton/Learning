// file: compare_words.c
#include<stdio.h>
#include<stdlib.h>

int compare_words(const void *p, const void *q)
{
    int psum = 0;
    int qsum = 0;

    char *pword = *(char **)p;
    while (*pword) psum += *(pword++);

    char *qword = *(char **)q; 
    while (*qword) qsum += *(qword++);

    return psum - qsum;
}

int main(int argc, char **argv)
{
    qsort(argv+1,argc-1,sizeof(argv[0]),compare_words);
    for (int i=1; i < argc; i++) {
        printf("%s",argv[i]);
        i == argc - 1 ? printf("\n") : printf(", ");
    }
    return 0;
}
