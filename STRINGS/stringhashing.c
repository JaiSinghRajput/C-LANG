#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str1[30],ch;
    int len,i;
    printf("enter value of str1 :");
    gets(str1);
    len=strlen(str1);
  
  for(i=0;i<len;i++)
  {
    str1[i]=str1[i]+2;
  }
  printf("hash of the string is %s",str1);
}
