#include<stdio.h>
int printtable(int n);
int main()
{
    int n;

    printf("enter your number :");
    scanf("%d", &n);

    printtable(n);
    printf("thanks for using jai tools");
    return 0;
}
int printtable(int n)
{
    for(int i=1; i<=10; i++)
    {
        printf("%d \n", n*i);
    }
}