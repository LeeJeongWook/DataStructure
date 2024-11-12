#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == SIZE - 1) {
        printf("Queue Overflow\n");
    } else {
        if (front == -1) front = 0;
        queue[++rear] = value;
    }
}

int dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");
        return -1;
    } else {
        return queue[front++];
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    printf("Dequeued: %d\n", dequeue());
    printf("Dequeued: %d\n", dequeue());
    return 0;
}
