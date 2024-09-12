#include<stdio.h>
#include<conio.h>
void main()
{
    int year;
    printf("enter the year for check :");
    scanf("%d",&year);

    if((year % 400 == 0 || year % 4==0 )&& year %100!=0)
    {
        printf("the year %d is a leap year ",year);
    }
    else{
   printf("entered year not A LEAP YEAR");
    }

}