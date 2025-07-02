/* file: personhours.c
 * Calculates persondays worked for an array
 * of jobs and an array of people per job
 */

#include<stdio.h>
#include<stdlib.h>

#define WORKDAYSPERYEAR 250
#define WORKHOURSPERDAY 8

void scalearray(int *input,const int *scale,
                size_t nelems);
void converttohours(int *input, size_t nelems);
int  workyearstohours(int days);

int main(int argc, char *argv[])
{
   // jobdays initially holds
   // the number of days worked per job
   int jobdays[]      = {1, 5, 7, 2, 4, 8, 3};

   // workersperday holds the number of workers
   // who worked each day on a job
   int workersperday[] = {2, 5, 7, 1, 9, 4, 5};

   size_t arrsz = sizeof(jobdays) / sizeof(jobdays[0]);

   converttohours(jobdays,arrsz);
   scalearray(jobdays,workersperday,arrsz);

   for (int i=0; i < arrsz; i++) {
      printf("%d",jobdays[i]);
      i == arrsz-1 ? printf("\n") : printf(", ");
   }
   return 0;
}

/* multiply each element in input by the
 * corresponding scaling element in scale
 */
void scalearray(int *input,const int *scale,
                size_t nelems)
{
   for (size_t i=0; i < nelems; i++) {
      input[i] *= scale[i];
   }
}

/* convert workdays array to hours */
void converttohours(int *input, size_t nelems)
{
   for (size_t i=0; i < nelems; i++) {
      *(input+i) = workyearstohours(*(input+i));
   }
}

/* convert a workday into a number of hours */
int workyearstohours(int days)
{
   return days * WORKDAYSPERYEAR * WORKHOURSPERDAY;
}
