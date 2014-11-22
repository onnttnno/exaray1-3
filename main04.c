#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define SIZE 5
void myRandomArrayInt(int x[], int n, int a, int b);/* from Ex 2 */
void myPrintArrayInt(int x[], int n); /* from Ex 1 */
double myRMS(int x[], int n);
int main( void )
{
 int a[SIZE] = {0};
 double rms;
 srand( time(NULL) );
 myRandomArrayInt(a, SIZE, 0, 9);
 myPrintArrayInt(a, SIZE);
 rms = myRMS(a, SIZE);
 printf("rms = %.2f\n", rms);
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
     x[i]=(rand()%b);
    }
}
double myRMS(int x[], int n)
{
    int i,sum=0,rms;
    for(i=0;i<SIZE;i++)
    {
        sum+=pow(x[i],2);
    }
    rms=sqrt(sum/SIZE);
    return rms;
}
