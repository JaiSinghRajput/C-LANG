#include<stdio.h>
#include<conio.h>
#include<string.h>
void concat(char[], char[]);
void main()
{
    char str1[30],str2[30];
    int len,i;
    printf("enter value of str1 :");
    gets(str1);
    printf("enter value of str2 :");
    gets(str2);
    concat(str1 , str2);

    printf("concatination of str1 & str2 is %s",str1);
}
void concat(char s1[],char s2[])
{
    int i,j;
i=strlen(s1);
s1[i]=' ';
i=i+1;
for(j=0;s2[j]!='\0';i++,j++)
s1[i]=s2[j];
s1[i]='\0';
}