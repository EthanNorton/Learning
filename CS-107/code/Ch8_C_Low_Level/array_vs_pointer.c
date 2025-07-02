// file: array_vs_pointer.c
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
    int nums[5];
    int nelems_nums = sizeof(nums) / sizeof(int);
    for (int i=0; i < nelems_nums; i++) {
        // fill with index
        nums[i] = i;
    }
    int *numsptr = nums; 
    // this is equivalent to:
    // int *numsptr = &nums[0]
    
    for (int i=0; i < nelems_nums; i++) {
        printf("%d, ",nums[i]); // one way of printing
        printf("%d, ",*(nums + i));    // print again
        printf("%d, ",numsptr[i]);     // print again
        printf("%d",  *(numsptr + i)); // print again
        i == nelems_nums - 1 ? printf("\n") 
                             : printf(", ");
    }
    return 0;
}
