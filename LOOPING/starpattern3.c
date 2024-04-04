#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    system("cls");
    int n =5;

    for(i=1; i<=n; i++)
    {
        for(j=n;j>=1;j--)
        {
            if(i>=j)
              printf("* ");
            else
            printf(" ");

        }
        printf("\n");
    }
}