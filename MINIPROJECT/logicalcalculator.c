// header files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// function declerations
void welc();
int add();
int sub();
int mul();
int dev();
int fact();
int mod();

// main function
void main()
{
    int selector;
    printf("<-----------------------hello dear user welcome to jai's cal c project----------------------->\n ");

    while (selector)
    {
        welc();
        scanf("%d", &selector);

        if (selector == 0)
            exit(1);
        if (selector <= 5)
        {
            if (selector > 0)
            {
                int op1, op2;
                printf("enter first number : ");
                scanf("%d", &op1);
                printf("enter secound number : ");
                scanf("%d", &op2);

                switch (selector)
                {
                case 1:
                    add(op1, op2);
                    break;
                case 2:
                    sub(op1, op2);
                    break;
                case 3:
                    mul(op1, op2);
                    break;
                case 4:
                    dev(op1, op2);
                    break;
                case 5:
                    mod(op1, op2);
                    break;

                default:
                    printf("unknown error code will be fixed soon ");
                    break;
                }
            }
            else
            {
                printf("please enter a positive number ");
            }
        }
        else if (selector == 6)
        {
            int op1;
            printf("enter a number to get factorial : ");
            scanf("%d", &op1);
            fact(op1);
        }
        else
        {
            printf("enter a number between 1 to 6");
        }
        printf("\n");
        system("cls");
    }
}
// -------------------------functions definations ----------------------------

// 1 welcome message
void welc()
{
    printf("\nyou need to choose one of them given options:\n 0 for exit \n 1 for addition \n 2 for substraction \n 3 for multiplication \n 4 for devision \n 5 for remainder \n 6 for factorial \n enter choice : ");
}
// 2 addition function
int add(int x, int y)
{
    printf("addition of %d and %d is %d", x, y, x + y);
    getch();
}

// 3 substraction
int sub(int x, int y)
{
    printf("%d minus %d is %d ", x, y, x - y);
    getch();
}
// 4 multiplication
int mul(int x, int y)
{
    printf("%d multiply by %d is %d ", x, y, x * y);
    getch();
}
// 5 devision
int dev(int x, int y)
{
    float res = x / y;
    printf("%d devide by %d is %d", x, y, res);
    getch();
}
// 6 modulas
int mod(int x, int y)
{
    printf("remainder of %d / %d is %d", x, y, x % y);
    getch();
}
// 7 factorial
int fact(int num)
{
    int i, total = 1;
    for (i = num; i != 1; i--)
    {
        total = total * i;
    }
    printf("factorial of %d is %d", num, total);
    getch();
}