#include<stdio.h>
#include<conio.h>
#include<windows.h>
void main()
{
      int number;
    system("cls");
    printf("----------------------------------jai's projects----------------------------------\n please enter your number to check is it positive or negitive :");
    scanf("%d",&number);

    (number>=0) ? printf("the given number is positive ...\n") : printf("the given number is negitive");
}