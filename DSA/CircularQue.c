#include <stdio.h>
int Que[100], rear = -1, front = -1, s;

int insert(int n)
{
    if ((front==0&&rear==s-1)||(front==rear+1))
    {
        printf("que is full.....");
        return 0;
    }
if(front==-1&&rear==-1){
    front=0;
    rear=0;
}
else if (rear==s-1)
{
    rear=0;
}
else{
rear +=1;}

Que[rear]=n;
printf("\n insetred %d",n);
}

int delete()
{
    int n;
    if (rear==-1&&front==-1)
    {
        printf("underflow ....");
        return 0;
    }
    n = Que[front];
    printf("deleted %d",n);
    if(front==rear){
        front=-1;
        rear=-1;
    }
    else if(front == s-1){
        front=0;
    }
    else{
        front = front +1;
    }
}

int peak()
{
   if (rear==-1&&front==-1)
    {
        printf("underflow ....");
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