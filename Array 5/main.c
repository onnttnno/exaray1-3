#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100
int main( void )
{
    int data[SIZE], i, sum = 0;
    srand(time(NULL));
    for (i = 0; i < SIZE; i++)
    {
        data[i] = i*i;
        printf("sum[%d] = %d\n",i , data[i]);
    }

    for (i = 0; i < SIZE; i++)
    {
        sum += data[i];
    }

    printf("sum = %d\n", sum);
    return 0;
}
