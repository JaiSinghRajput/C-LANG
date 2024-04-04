#include<stdio.h>
#include<windows.h>
#include<conio.h>
void main()
{
    float a,b;
    char op,cp='%';
    printf("enter oprator (+,-,*,/ )-: ",cp);
    scanf("%c",&op);

    if (op == '+' || op=='-' || op== '*' || op == '/' || op == '%') 
    {
        printf("enter two numbers : ");
        scanf("%f %f",&a,&b);
    }
    else{
        system("cls");
        printf("o sut up bruh check your inputed oprator don't try to do crazy things here !");
    }
    switch(op)
    {
        case '+':
        printf("answer is - %1.f",a+b );
        break;
        case '-':
        printf("answer is - %1.f",a-b );
        break;
        case '*': 
        printf("answer is - %2.f",a*b );
        break;
        case '/':
        printf("answer is - %2.f",a/b );
        break;
        // case '%':
        // printf("answer is - %d",a%b );
        // break;
        default :
        system("cls");
         printf("unexpected error : invalid data type make sure you should have inter real numbers \n try again.....");
         break;
    }
}