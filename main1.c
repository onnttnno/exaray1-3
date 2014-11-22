#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5
void myRandomArrayInt(int x[], int n, int a, int b);
void myPrintArrayInt(int x[], int n);
int main( void )
{
 int data[SIZE] = {0}, i;
 srand( time(NULL) );
 myRandomArrayInt(data, SIZE, 0, 9);
 myPrintArrayInt(data, SIZE);
 myRandomArrayInt(data, SIZE, 0, 9);
 myPrintArrayInt(data, SIZE);
 return 0;
}
void myPrintArrayInt(int x[], int n)
{
   int i;
    printf("[");
    for(i=0;i<5;i++){
  printf("%d\t",x[i]);
    }
     printf("]\n");
}
void myRandomArrayInt(int x[], int n, int a, int b)
{
  int i,m;
    for(i=0;i<5;i++){
     m=rand();
     x[i]=(rand()%9);
    }
}
