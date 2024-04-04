#include <stdio.h>
#include<stdlib.h>
#include <conio.h>
long int getInput();
long int main(){
    long int a=0;
    printf("-----------------programs by jai-------------------\n enter a mixed string :");
    a=getInput();
    printf("your shorted intiger is %ld ", a);
    return 0;
}
long int getInput()
{
    long int num=0,ch;
    while(1)
    {   
        ch=getch();
        if(ch>=48 && ch<=57)
        {
            num=num*10+(ch-48);
        }
        if(ch == 13)
        break;
    }
        return num;
}
