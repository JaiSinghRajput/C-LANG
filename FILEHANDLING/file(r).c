#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    FILE *fp=NULL;
    char ch,fileName[10]="Jai.txt";
    fp = fopen(fileName,"r");
    if(fp==NULL)
    {
      printf("file dosn't exit or open failure");
      exit(1);
    }
    while (1)
    {
        if(ch==EOF)
            break;
        else
        {
          ch=fgetc(fp);
          printf("%c",ch);
        }
    }
    fclose(fp);
}