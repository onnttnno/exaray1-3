#include <stdio.h>
#define ROWS 4
#define COLS 4
int main( void )
{
    int a[ROWS][COLS] = {{1,2,3}, {4,5,6}, {7,8,9}, {8,7,6}};
    int b[ROWS][COLS] = {{0}};
    int i, j, threshold = 5, count = 0;
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            b[i][j] = (a[i][j] > threshold) ? 1 : 0;
            if (b[i][j])
            {
                count++;
            }
        }
        printf("count = %d\n", count);
        return 0;
    }
}
