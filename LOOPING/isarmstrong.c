#include<stdio.h>
#include<conio.h>
void main()
{
    int a,y=0;
    printf("Enter a 3 degit intiger:");
    scanf("%d",&a);
    for(int i=a;i!=0;)
    {
        int x=i%10;
        y=y+x*x*x;
        i=i/10;
    }

    if(y==a)
    {
        printf("enterd number is a arm_strong number/");
    }
    else{
        printf("enter number is not A arm_strong number X");
    }

getch();
}