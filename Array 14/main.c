#include <stdio.h>
#define ROWS 4
#define COLS 4
int main( void )
{
    int a[ROWS][COLS] = {{1,2,3}, {4,5,6}, {7,8,9}, {8,7,6}};
    int i, j, max, count;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if( a[i][j] < max ){

            }
        }
    }
    printf("maximum value = %d\n", max);
    printf("number of occurrences: %d\n", count);
    return 0;

}
