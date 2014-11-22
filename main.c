#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5
void myRandomArrayInt(int x[], int n, int a, int b);/* from Ex 2 */
void myPrintArrayInt(int x[], int n); /* from Ex 1 */
int myDot(int a[], int b[], int m);
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
int myDot(int a[], int b[], int m)
{
    int i,sum=0,average;
    for(i=0;i<SIZE;i++){
    sum+=a[i]+b[i];}
    average=sum/SIZE;
    return average;
}
int main( void )
{
 int a[SIZE] = {0}, b[SIZE] = {0}, r;
 srand( time(NULL) );
 myRandomArrayInt(a, SIZE, 0, 9);
 myRandomArrayInt(b, SIZE, 0, 9);
 printf("a = "); myPrintArrayInt(a, SIZE);
 printf("b = "); myPrintArrayInt(a, SIZE);
 r = myDot(a, b, SIZE);
 printf("a dot b = %d\n", r);
 return 0;
}
