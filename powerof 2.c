#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    int a;
    printf ("enter the number\n");
    scanf("%d",&a);
    
    int f=(a>0&&(a&(a-1))==0);
    if (f==1)
    printf(" number is power of 2\n");
    else
    printf("number is not power of 2\n");
    
}
