#include<stdio.h>
#include<ctype.h> // For isdigit() function

#define s 30

int top = -1;
char infix[s], postfix[s], stack[s];

void push(char x);
char pop();
int preced(char x);
void intopo();

void main() {
    printf("Enter an Infix Equation : ");
    scanf("%s", infix);
    intopo();
    printf("Result: %s\n", postfix);
}

void push(char x) {
    if (top != s - 1) {
        stack[++top] = x;
    }
}

char pop() {
    if (top != -1) {
        return stack[top--];
    }
    return -1;
}

int preced(char x) {
    if (x == '^')
        return 3;
    else if (x == '*' || x == '/')
        return 2;
    else if (x == '+' || x == '-')
        return 1;
    else
        return 0;
}

void intopo() {
    int i = 0, k = 0;
    char x;
    
    while (infix[i] != '\0') {
        if (isdigit(infix[i])) {
            postfix[k++] = infix[i];
        } else if (infix[i] == '(') {
            push(infix[i]);
        } else if (infix[i] == ')') {
            while ((x = pop()) != '(') {
                postfix[k++] = x;
            }
        } else {
            while (preced(stack[top]) >= preced(infix[i])) {
                postfix[k++] = pop();
            }
            push(infix[i]);
        }
        i++;
    }
    
    while (top != -1) {
        postfix[k++] = pop();
    }
    postfix[k] = '\0';
}
