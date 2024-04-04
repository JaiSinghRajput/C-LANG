#include<stdio.h>
#include<conio.h>
#include<windows.h>
void main()
{
    int age;
    system("cls");
    printf("----------------------------------jai's projects----------------------------------\n please enter your age to check elegiablity :");
    scanf("%d",&age);

    if(age<18 && age > 0)
    {
        printf("you are not aligible to driving license");
    }
    else if( age < 0 || age > 100)
    {
        printf("ye tu doglapan mat kr bhai ");
    }
    else if(age>18)
    {
        printf("you are aligible to driving license & voting ");
    }
}