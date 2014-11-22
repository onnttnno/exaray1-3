#include <stdio.h>
#define SIZE 5

int main( void )
{
    int d1[SIZE] = {0}, d2[SIZE] = {0}, i;
    for (i = 1; i < SIZE; i++) {
        d1[i] = i*i + i;
        d2[SIZE-i] = 2*i - 1;
        printf("d1[%d] = %d, d2[%d] = %d\n", i, d1[i], i, d2[i]);
    }
    return 0;
}
