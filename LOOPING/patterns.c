#include <stdio.h>
#include <conio.h>
void main()
{
    int num=10, n, i = 0, j = 0;
    // printf("Enter the number of rows: ");
    // scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        for (j=i;j<num;j++)
        {
            printf(" ");
        }
        for (j = 0; j <=i; j++)
        {
            printf("*");
        }
        for (j = 0; j <i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 0; i <num+2; i++)
    {
        for (j = 0; j <=i; j++)
        {
            printf(" ");
        }
        for (j=i;j<num-1;j++)
        {
            printf("*");
        }
        for (j=i;j<num;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    getch();
}