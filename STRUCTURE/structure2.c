// a program type--->function
// using structure with array
// 5 student's data

#include<stdio.h>
#include<conio.h>
#include<windows.h>
// declaration of structure ======>
struct student
{
    int ID;
    char Name[10];
    char branch[10];
    float Marks;
};


void main()

{ 
    student{}s[5];
    int i;
    system("cls");
    printf("----------------------------------jai's projects----------------------------------\n please enter value carasponding students 1 to 5 :\n series -->\n ID \n Name \n branch \n marks ");
    for(i=0;i<=4; i++)
    {
        printf("enter data for student %d",i+1);
        scanf("%d %s %s %f",s[i].ID,s[i].Name,s[i].branch,s[i].Marks);
        
    }

}