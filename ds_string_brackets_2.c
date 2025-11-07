#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char stack[1000];
int top = -1,i;

void push(char c) {
    stack[++top] = c;
}

void pop() {
    if (top != -1)
        top--;
}

char peek() {
    if (top != -1)
        return stack[top];
    return '\0';
}

int isMatching(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

int isBalanced(char *str) {
    for (i = 0; str[i]; i++) {
        char c = str[i];
        if (c == '(' || c == '{' || c == '[')
            push(c);
        else if (c == ')' || c == '}' || c == ']') {
            if (top == -1 || !isMatching(peek(), c))
                return 0;
            pop();
        }
    }
    return top == -1;
}

int main() {
    char str[1000];
    printf("Enter the string of brackets:\n");
    scanf("%s", str);

    if (isBalanced(str))
        printf("Yes, the brackets are balanced\n");
    else
        printf("No, the brackets are not balanced\n");

    return 0;
}

