#include<stdio.h>
#include<conio.h>
void main()
{
    char i,j;
    system("cls");

    for(i='a'; i<='e'; i++)
    {
        for(j='a';j<i;j++)
        {
        printf(" %c",j);
        }
        printf("\n");
    }
}
