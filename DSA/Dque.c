#include <stdio.h>
#define MAX 5 // Maximum size of deque

int deque[MAX];
int front = -1;
int rear = -1;

// Check if deque is full
int isFull()
{
    return ((front == 0 && rear == MAX - 1) || (front == rear + 1));
}

// Check if deque is empty
int isEmpty()
{
    return (front == -1);
}

// Insert an element at the front of the deque
void insertFront(int value)
{
    if (isFull())
    {
        printf("Deque is full, cannot insert at front.\n");
        return;
    }
    if (front == -1)
    { // Deque is initially empty
        front = 0;
        rear = 0;
    }
    else if (front == 0)
    { // Front is at the first position, wrap around
        front = MAX - 1;
    }
    else
    {
        front = front - 1;
    }
    deque[front] = value;
    printf("Inserted %d at the front.\n", value);
}

// Insert an element at the rear of the deque
void insertRear(int value)
{
    if (isFull())
    {
        printf("Deque is full, cannot insert at rear.\n");
        return;
    }
    if (front == -1)
    { // Deque is initially empty
        front = 0;
        rear = 0;
    }
    else if (rear == MAX - 1)
    { // Rear is at the last position, wrap around
        rear = 0;
    }
    else
    {
        rear = rear + 1;
    }
    deque[rear] = value;
    printf("Inserted %d at the rear.\n", value);
}

// Delete an element from the front of the deque
void deleteFront()
{
    if (isEmpty())
    {
        printf("Deque is empty, cannot delete from front.\n");
        return;
    }
    printf("Deleted %d from the front.\n", deque[front]);
    if (front == rear)
    { // Deque has only one element
        front = -1;
        rear = -1;
    }
    else if (front == MAX - 1)
    { // Wrap around
        front = 0;
    }
    else
    {
        front = front + 1;
    }
}

// Delete an element from the rear of the deque
void deleteRear()
{
    if (isEmpty())
    {
        printf("Deque is empty, cannot delete from rear.\n");
        return;
    }
    printf("Deleted %d from the rear.\n", deque[rear]);
    if (front == rear)
    { // Deque has only one element
        front = -1;
        rear = -1;
    }
    else if (rear == 0)
    { // Wrap around
        rear = MAX - 1;
    }
    else
    {
        rear = rear - 1;
    }
}

// Display the elements of the deque
void displayDeque()
{
    if (isEmpty())
    {
        printf("Deque is empty.\n");
        return;
    }
    printf("Deque elements are: ");
    int i = front;
    while (1)
    {
        printf("%d ", deque[i]);
        if (i == rear)
        {
            break;
        }
        i = (i + 1) % MAX; // Circular increment
    }
    printf("\n");
}

int main()
{
    insertRear(10);
    insertRear(20);
    insertFront(5);
    insertRear(30);
    insertFront(2);
    displayDeque();

    deleteFront();
    displayDeque();

    deleteRear();
    displayDeque();

    return 0;
}
