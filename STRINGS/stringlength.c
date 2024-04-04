#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char A[20]; //string
    int i;
    printf("enter your name :\n");
    scanf("%s",A); //scaning of string 
    printf("Hello %s\n",A);//printing of string

    //length count 
    for(i=0;A[i]!=0;i++);
printf("length of your name is = %d",i);

}