#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5
void myPrintArrayInt(int x[], int n);
void myPrintArrayInt(int x[], int n)
{
    int i;
    printf("[");
    for(i=0;i<5;i++){
 n=rand();
 x[i]=n;
 printf("%d\t",x[i]);
    }
     printf("]\n");
}
int main( void )
{
 int data[SIZE] = {0}, i;
 for (i = 0; i < SIZE; i++) { data[i] = i+1; }
 myPrintArrayInt(data, SIZE);
 for (i = 0; i < SIZE; i++) { data[i] = i*i; }
 myPrintArrayInt(data, SIZE);
 return 0;
}
