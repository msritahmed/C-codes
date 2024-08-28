#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    
    char a[10];
    printf("enter the string\n");
    gets(a);
    int l=0;
    
    
    for(int i=0;a[i]!='\0';i++)
    {
        l++;
        
    }
    
    printf("%d",l);
}
