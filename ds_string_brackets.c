#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

// Push function
void push(char c) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = c;
}

// Pop function
char pop() {
    if (top == -1) {
        return '\0';  // Return null character if stack is empty
    }
    return stack[top--];
}

// Peek function (optional for debugging)
char peek() {
    if (top == -1) return '\0';
    return stack[top];
}

// Function to check if brackets are balanced
int is_balanced(char *exp) {
    for (int i = 0; exp[i] != '\0'; i++) {
        char ch = exp[i];
        if (ch == '(' || ch == '{' || ch == '[') {
            push(ch);
        } else if (ch == ')' || ch == '}' || ch == ']') {
            char top_char = pop();
            if ((ch == ')' && top_char != '(') ||
                (ch == '}' && top_char != '{') ||
                (ch == ']' && top_char != '[')) {
                return 0;  // Not balanced
            }
        }
    }
    return top == -1;  // Stack should be empty if balanced
}

int main() {
    int ch;
    char expression[MAX];

    while (1) {
        printf("\nEnter\n1.Check Balanced Brackets\nAny other to exit\n");
        scanf("%d", &ch);
        getchar(); // clear newline from input buffer

        if (ch == 1) {
            top = -1;  // Reset stack before each check
            printf("Enter the expression:\n");
            fgets(expression, MAX, stdin);
            expression[strcspn(expression, "\n")] = '\0'; // Remove newline

            if (is_balanced(expression))
                printf("The brackets are balanced ?\n");
            else
                printf("The brackets are NOT balanced ?\n");
        } else {
            printf("Exiting...\n");
            break;
        }
    }

    return 0;
}

