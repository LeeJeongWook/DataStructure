#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push(int value) {
    if (top < MAX - 1) {
        stack[++top] = value;
    } else {
        printf("Stack Overflow\n");
    }
}

int pop() {
    if (top >= 0) {
        return stack[top--];
    } else {
        printf("Stack Underflow\n");
        return -1;
    }
}

int main() {
    push(10);
    push(20);
    printf("Popped: %d\n", pop());
    printf("Popped: %d\n", pop());
    return 0;
}
