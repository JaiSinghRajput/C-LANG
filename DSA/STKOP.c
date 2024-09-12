#include<stdio.h>

int stk[100], top = -1, s;

int push(int num);
void pop();
void peak();

void main() {
    int num, op = -1; // Initialize op to a non-zero value to enter the loop
    
    printf("Enter size of Stack: ");
    scanf("%d", &s);
    
    while(op != 0) {
        printf("\nSelect The operator\n 1: Insert element in stack\n 2: Pop element from stack\n 3: Get the peak value from stack\n 0: Exit\nEnter Operator: ");
        scanf("%d", &op);
        
        if(op == 1) {
            printf("\nEnter value to insert in stack: ");
            scanf("%d", &num);
            printf(push(num) ? "Done\n" : "Failed\n");
        } else if(op == 2) {
            pop();
        } else if(op == 3) {
            peak();
        } else if(op != 0) {
            printf("\nWrong operator selected...\n");
        }
    }
}

int push(int num) {
    if(top == s - 1) {
        printf("ERROR: Stack overflow detected...\n");
        return 0;
    }
    top = top + 1;
    stk[top] = num;
    printf("Insertion successful...\n");
    return 1;
}

void pop() {
    if(top == -1) {
        printf("Nothing to pop...\n");
    } else {
        printf("\nPopped %d\n", stk[top]);
        top = top - 1;
    }
}

void peak() {
    if(top == -1) {
        printf("Nothing to get...\n");
    } else {
        printf("Peak value in stack is: %d\n", stk[top]);
    }
}
