#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
struct address{
    char country[10];
    char state[10];
    char district[10];
    long int PIN_CODE;
};
struct employes{
    char name[20];
    char EID[10];
    int salary;
    struct address a;

};
void main() 
{
struct employes E[2];
for (int i = 0; i < 3; i++)
{
printf("Enter details in order of - Employe-name , Employe-ID , SAlARY , address(contry , state , district , Pin code ) for EMploy %d ", i+1);
scanf("%s %s %d %s %s %s %ld",E[i].name,E[i].EID,&E[i].salary,E[i].a.country,E[i].a.state,E[i].a.district,&E[i].a.PIN_CODE);
}
printf("S.No\tEmploye-name\tEmploye-ID\tSAlARY\tContry\tstate\tdistrict\tPin-code\n");
for (int i = 0; i < 3; i++)
{
printf("%d\t%s\t%s\t%d\t%s\t%s\t%s\t%ld\n",i+1,E[i].name,E[i].salary,E[i].a.country,E[i].a.state,E[i].a.state,E[i].a.PIN_CODE);
}
getch();
}