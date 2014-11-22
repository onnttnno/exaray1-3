#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],i,x,y,temp;
    printf(">Enter 10 Integer: \n");
    for( i=0;i<10;i++ ){
        printf("> ");
        scanf("%d",&a[i]);
    }

    for( x=0;x<10;x++){
        for( y=x+1;y<10;y++){
        if( a[y] < a[x] ){
            temp = a[x];
            a[x] = a[y];
            a[y] = temp;
        }
    }
    }
    printf("\n");
    printf("The minimum value is: %d\n",a[0]);
    printf("The maximum value is: %d\n",a[9]);

    return 0;
}
