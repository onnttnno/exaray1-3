#include <stdio.h>
#define SIZE 10

int main( void )
{
    int a1[SIZE] = {0}, a2[SIZE] = {0}, i, s1 = 0, s2 = 0;
    for (i = SIZE-1; i >= 0; i--)
    {
        a1[i] = i;
        a2[i] = SIZE - i - 1;
        s1 += (a1[i] % 2 == 0 ? 0 : a1[i]);
        s2 += (a2[i] % 2 == 0 ? a2[i] : 0);
    }
    printf("s1 = %d, s2 = %d\n", s1, s2);
    return 0;
}
