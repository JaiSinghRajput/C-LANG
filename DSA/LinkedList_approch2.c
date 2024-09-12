#include <stdio.h>
#include<malloc.h>

typedef struct Node{
    int data;
    struct Node *next;
}node;

node *start = NULL;
// create a node in end also for the insertation in end 
void Createnode(node *ptr,int d)
{
    if(ptr==NULL)
    {
        start = (node *)malloc(sizeof(node));
        start->data = d;
        start->next=NULL;
    }
    while(ptr->next!=NULL)
    { ptr= ptr->next; }
    ptr->next = (node *)malloc(sizeof(node));
    ptr->next->data = d;
    ptr->next->next=NULL;
}

void appbig(node *ptr,int d)
{
    start=(node *)malloc(sizeof(node));
    start->data=d;
    start->next=ptr;
}

void appmid(node *ptr,int d,int pos)
{
    node *tmp;
    int i;
    for (i=1;i<pos-1;i++)
    {
        ptr=ptr->next;
    }
    tmp = ptr->next;
    ptr->next = (node *)malloc(sizeof(node));
    ptr->next->data=d;
    ptr->next->next=tmp;
}

void delend(node *ptr)
{
    while(ptr->next->next!=NULL)
    {ptr=ptr->next;}
    free(ptr->next);
}

void delbig(node *ptr)
{
    start = ptr->next->next;
    free(ptr->next);
}
void delmid(node *ptr,int pos)
{
    node *tmp;
    int i;
    for(i=1;i<pos-1;i++)
    {ptr=ptr->next;}
    tmp = ptr->next;
    ptr->next=tmp->next;
    free(tmp);
}
void displayall(node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
void main()
{
    Createnode(start,89);
    Createnode(start,56);
    Createnode(start,78);
    Createnode(start,89);
    displayall(start);
}