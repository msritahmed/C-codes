#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    int a,b;
    
    
    printf("enter the nuber\n");
    scanf("%d",&a);
    b=a;
    int rem,r=0;
    
    while(b!=0)
    {
        rem=b%10;
        r=r*10+rem;
        b=b/10;
        
    }
    
    printf("reversed number %d\n",r);
}
