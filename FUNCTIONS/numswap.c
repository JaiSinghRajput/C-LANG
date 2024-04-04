// a program type of function
// using pointer
// swap two numbers using call by rafrance
#include<stdio.h>
#include<conio.h>
#include<windows.h>
// declaration of function ======
void swap(int *, int *);
void main()
{
    int a=10 , b=20; 
    system("cls");
    printf("----------------------------------jai's projects----------------------------------\n please enter value carasponding a :");
    scanf("%d",&a);
    printf("please enter value carasponding b :");
    scanf("%d",&b);
    printf("before swaping.... \n a = %d , b = %d \n",a,b);
    swap(&a,&b);
}
// defination of function 
void swap(int *x ,int *y)
{
    int t;
    t =*x;
    *x = *y;
    *y =t;
        printf("after swaping.... \n a = %d , b = %d ",*x,*y);
}