#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    int a;
    int f=1;
    
    printf("ente the number\n");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        f=f*i;
    }
    printf("factorial is %d",f);
    
    
}
