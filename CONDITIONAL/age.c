#include<stdio.h>
#include<conio.h>
main()
{
   int age;
   printf("enter your age:");
   scanf("%d",&age);

   //age>18? printf("adult") : printf("not adult");

   if(age>0 && age<13) 
   {
      printf("childhood");
   }
   
   else if(age<18 && age>13) 
   {
      printf("teenage");
   }
   else if (age>18 && age<100)
   {
      printf("adult");
   }
   else{
      printf("wrong age"); 
   }

 return 0;
}

