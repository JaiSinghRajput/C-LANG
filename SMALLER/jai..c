#include<stdio.h>
#include <conio.h>

int main()
{
      int a, b;
      char op;
      printf("enter the first num:");
      scanf("%d", &a);
      printf("enter the opration :");
      scanf("%c", &op);
      printf("enter the second num:");
      scanf("%d", &b);
      switch (op)
      {
      case '+':
            printf("%d", a + b);
            break;

      case '-':
            printf("%d", a - b);
            break;

      case '*':
            printf("%d", a * b);
            break;

      case '/':
            printf("%d", a / b);
            break;

      default:
            printf("enter a valid oprator");
            break;
      }
}