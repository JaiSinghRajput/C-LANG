#include <stdio.h>
int Que[100], rear = -1, front = 0, s;

int insert(int n)
{
    if (rear == s)
    {
        printf("que is full.....");
        return 0;
    }
    else
    {
        rear += 1;
        Que[rear] = n;
        printf("inserted %d", n);
        return 1;
    }
}

int delete()
{
    if (rear < front)
    {
        printf("underflow ....");
        return 0;
    }
    else
    {
        front += 1;
        printf("deleted %d", Que[front - 1]);
        return 1;
    }
}

int peak()
{
    if (rear < front)
    {
        printf("underflow ......");
        return 0;
    }
    else
    {
        printf("peak value is %d", Que[rear]);
        return 1;
    }
}

void main()
{
    int op = 1, num;
    printf("enter size of que : ");
    scanf("%d", &s);
    while (op)
    {
        printf("\nchoose a operator \n 1 : for insertation \n 2 : for deletion \n 3 : for view front value \n enter choice : ");
        scanf("%d",&op);
        switch (op)
        {
        case 1:
        {
            printf("enter value to insert : ");
            scanf("%d", &num);
            insert(num);
            break;
        }
        case 2:
            delete ();
            break;
        case 3:
            peak();
            break;
        case 0:
            op = 0;
            break;
        default:
            printf("enter a valid oprator ....");
            break;
        }
    }
}