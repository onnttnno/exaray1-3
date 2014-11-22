#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
int main( void )
{
    double data[SIZE] = {1.1, 2, 3.3, 4, 5.5, 5.5, 4, 3.3, 2, 1.1};
    int i;
    double sum, average;
    printf("\n[ ");
    for (i = 0; i < SIZE; i++)
    {
        printf("%.2f ", data[i]);
    }
    printf("]\n");

    for (i = 0; i < SIZE; i++)
    {
        sum += data[i];
    }

    average = sum/SIZE;

    printf("average = %.2f\n", average);
    return 0;
}
