#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

struct address {
    char country[20];
    char state[20];
    char district[20];
    long int PIN_CODE;
};

struct employes {
    char name[20];
    char EID[10];
    int salary;
    struct address a;
};

void main() {
    struct employes E[2];
    for (int i = 0; i < 2; i++) {
        printf("Enter details in order of - Employee-name, Employee-ID, Salary, address(country, state, district, Pin code) for Employee %d: ", i + 1);
        scanf("%s %s %d %s %s %s %ld", E[i].name, E[i].EID, &E[i].salary, E[i].a.country, E[i].a.state, E[i].a.district, &E[i].a.PIN_CODE);
    }

    printf("===============================================================================================================\n");
    printf("S.No\tEmployee Name\tEmployee ID\tSalary\t\tCountry\t\tState\t\tDistrict\tPIN Code\n");
    printf("===============================================================================================================\n");
    for (int i = 0; i < 2; i++) {
        printf("%d\t%s\t\t\t%s\t%d\t%-15s\t%-15s\t%-15s\t%ld\n", i + 1, E[i].name, E[i].EID, E[i].salary, E[i].a.country, E[i].a.state, E[i].a.district, E[i].a.PIN_CODE);
    }
    printf("===============================================================================================================\n");
    getch();
}
