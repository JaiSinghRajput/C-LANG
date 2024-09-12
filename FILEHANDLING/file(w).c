#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fp=NULL;
    char ch,fileName[10]="Jai.txt";
    printf("enter the text to enter in file :\n");
    gets(str);
    fp = fopen(fileName,"w");
    for(int i=0; i<=100; i++)
    {
        fputs(str,fp);    
    }
    fclose(fp);

}