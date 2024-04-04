#include<stdio.h>
#include<conio.h>
void main()
{ 
    char a='a',z='z';

    for(int i=a,j=z;i<=z||j>=a;i++,j--)
    { 
        printf("%c%c ",i,j);
    }

}