// file: dynamic_memory.c
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

int main(int argc, char **argv)
{
    int num_ints = atoi(argv[1]);

    int *values = malloc(num_ints * sizeof(int)); 
    assert(values);

    // fill with even numbers
    for (int i=0; i < num_ints; i++) {
        values[i] = i * 2;
    }

    for (int i=0; i < num_ints; i++) {
        printf("%d",values[i]);
        i == num_ints - 1 ? printf("\n") : printf(", ");
    }

    // double the size
    int *new_values = realloc(values,num_ints * 2 * sizeof(int));
    assert(new_values);

    values = new_values;
    num_ints *= 2;

    // fill with more even numbers
    for (int i=num_ints / 2; i < num_ints; i++) {
        values[i] = i * 2;
    }

    for (int i=0; i < num_ints; i++) {
        printf("%d",values[i]);
        i == num_ints - 1 ? printf("\n") : printf(", ");
    }

    // clean up
    free(values);
    return 0;
}

