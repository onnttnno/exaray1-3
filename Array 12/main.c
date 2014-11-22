#include <stdio.h>
#define ROWS 3
#define COLS 3
int main( void )
{
    int a[ROWS][COLS] = { {1,0,0}, {0,0,1}, {0,0,1} };
    int b[ROWS] = {3, 2, 1}, c[ROWS] = {0};
    int i, j;
    for (i = 0; i < ROWS; i++)
    {
        c[i] = 0;
        for (j = 0; j < COLS; j++)
        {
            c[i] += a[i][j] * b[j];
        }
    }
    for (i = 0; i < ROWS; i++)
    {
        printf("%d\n", c[i]);
    }
    return 0;
}
