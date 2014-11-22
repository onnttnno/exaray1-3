#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define SIZE 5
void myRandomArray(int x[], int n, int a, int b); /* from Ex 1 */
void myPrintArrayInt(int x[], int n); /* output elements in x[] */
void myPrintArrayDouble(double x[], int n);
void mySMA(int x[], double y[], int m, int n);
int main( void )
{
 int a[SIZE] = {0}; double b[SIZE] = {0};
 srand( time(NULL) );
 myRandomArrayInt(a, SIZE, 1, 10);
 mySMA(a, b, SIZE, 3); /* SMA over 3 data points */
 myPrintArrayInt(a, SIZE);
 myPrintArrayDouble(b, SIZE);
 return 0;
}
void myPrintArrayInt(int x[], int n)
{
   int i;
    printf("[");
    for(i=0;i<SIZE;i++){
  printf("%d\t",x[i]);
    }
     printf("]\n");
}
void myRandomArrayInt(int x[], int n, int a, int b)
{
  int i,m;
    for(i=0;i<SIZE;i++){
     m=rand();
     x[i]=((rand()%10)+1);
    }
}
void mySMA(int x[], double y[], int m, int n)
{
    int i,j,k,sum,count;
    for(i=0;i<m;i++)
    {
        sum=0;
        sum+=x[i];
        for(j=i-1;(j<i)&&(j>=0);j++)
        {
        sum+=x[j];
        for(k=j-1;(k<j)&&(k>=0);k++)
        {
         sum+=x[k] ;
        }
    }
    y[i]=sum/n;
    }
}
void myPrintArrayDouble(double x[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
    printf("%.1f\t",x[i]);
    }
}
