#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main( void )
{
    int data[SIZE] = {2,0,1,3,0,0,2,5,5,6,};
    int i, count = 0;
    printf("[ ");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", data[i]);
    }
    printf("]\n");

    for (i = 0; i < SIZE; i++){
        if( data[i]>=5 ){
            count++;
        }
    }

    printf("count = %d\n", count);
    return 0;
}
