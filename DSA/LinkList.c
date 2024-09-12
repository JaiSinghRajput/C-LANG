// basic link list ..
#include <stdlib.h>
#include <stdio.h>
// self refrencing structure
struct node
{
    int data; // useful data can be any type like int float double string etc.
    struct node *next; //node pointer variable to create next node 
};
// accessing all nodes of linked list
void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node * insertAtFirst(struct node *head,int data)
{
    if(head == NULL)
    {
          head = (struct node *)malloc(sizeof(struct node));
          head->data = data;
          return head;
    }
    struct node *ptr = (struct node *)malloc(sizeof (struct node));
    ptr->next=head;
    ptr->data = data;
    return ptr;
}
struct node * insertAtIndex(struct node *head,int data,int index)
{
    struct node *ptr = (struct node *)malloc(sizeof (struct node));
    struct node *p = head;
    int i =0;
    
    while(i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    ptr->data = data;
    return head;
}
struct node * insertAtEnd(struct node *head,int data)
{
    struct node *ptr = (struct node *)malloc(sizeof (struct node));
    ptr->data = data;
    struct node*p;
    while(p->next)
    {p = p->next;}
    
    return ptr;

}

int main()
{
    struct node *head = NULL;
    // traversal(head);
    head = insertAtFirst(head,78);
    head = insertAtFirst(head,99);
    head = insertAtFirst(head,45);
    head = insertAtFirst(head,79);
    head = insertAtFirst(head,49);
    head = insertAtIndex(head,34,3);
    traversal(head);
    return 0;
}