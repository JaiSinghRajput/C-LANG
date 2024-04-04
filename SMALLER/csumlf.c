#include<stdio.h>
#include<conio.h>
void main()
{ 

    for(int i=1,j=20;i<=j||j>=i;i++,j--)
    {
        
        printf("%d + %d = %d\n ",i,j,i+j);
    }
}