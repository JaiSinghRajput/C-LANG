#include<stdio.h>
#include<conio.h>
main()
{
   int marks;
   printf("enter your marks:");
   scanf("%d",&marks);

    if(marks<33) 
   {
      printf("fail");
   }
      else if(marks == 33) 
   {
      printf("pass");
   }

   else if(marks<40 && marks>33) 
   {
      printf("C");
   }
   else if (marks>40 && marks<60)
   {
      printf("B");
   }
   else if (marks>60 && marks<90)
   {
      printf("A");
   }
   else if (marks>90 && marks<100)
   {
      printf("A+");
   }
   else{
      printf("wrong marks"); 
   }
   return 0;
}