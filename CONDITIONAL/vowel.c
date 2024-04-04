#include<stdio.h>
#include<conio.h>
#include<windows.h>
void main()
{
    char inputc;
    system("cls");
    printf("----------------------------------jai's projects----------------------------------\nplease enter a character to check is a vowel or consonent :");
    scanf("%c",&inputc);
    switch (inputc)
    {
    case 'a':
        printf("entered character is a vowel ");
        break;
    case 'e':
        printf("entered character is a vowel ");
        break;
    case 'i':
        printf("entered character is a vowel ");
        break;
    case 'o':
        printf("entered character is a vowel ");
        break;
    case 'u':
        printf("entered character is a vowel ");
        break;
    
    default:
    printf("entered character is not a vowel");
        break;
    }

}