//developed & programing by Faraz_Hmd
#include <stdio.h>
#include "BSORTD.h/BSORTD.h"
#include "BSORTD.h/BSORTD.c"
// C program for generating a
// random number in a given range.
#include <stdlib.h>
#include <time.h>
#define Max_size 100
// Generates and prints 'count' random
// numbers in range [lower, upper].
void printRandoms(int lower, int upper,
                  int count,int x[Max_size])
{
    int num[Max_size];
    int i;
    for (i = 0; i < count; i++) {

        for (int j = 0; j <Max_size ; ++j) {
            num[j] = (rand() % (upper - lower + 1)) + lower;
            x[j]=num[j];
            printf("%d\t",x[j]);


        }
    }
}

// Driver code
int main()
{
    int lower = 0, upper = 100, count = 1;
    int x[Max_size];
    // Use current time as
    // seed for random generator
    srand(time(0));

    printRandoms(lower, upper, count,x);
    printf("\n\n__________________________________________________________________________________________________________\n\n");
    bubbleSortD(x,Max_size);
    printArray(x,Max_size);
    return 0;
}

