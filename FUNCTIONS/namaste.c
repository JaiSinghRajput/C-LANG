#include<stdio.h>
void  bonjour();
void  namaste();
int main ()
{
    char ch;
    printf("enter i for indian && f for franch : ");
    scanf("%c", &ch);
    if(ch == 'i') {
        namaste();
    } else {
    bonjour();
           }
 return 0;
}
void bonjour()
{
 printf("bonjour");
}
void namaste()
{
    printf("namaste");
}                  