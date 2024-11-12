/*=============================================================*/
/* ���� ����Ʈ (Linked List)                                    */
/* ����: �� ��尡 �����Ϳ� ���� ��忡 ���� �����͸� �����ϴ� ���� */
/* ����                                                        */
/*  - ���� ũ�� ���� ����                                       */
/*  - ����/������ �迭�� ���� ��������� ����                     */
/*  - (O(1) �ð����⵵, Ư�� ��ġ ������ O(n))                   */
/* ����                                                        */
/*  - ���� ������ �Ұ��� (O(n) Ž��)                             */
/*  - �߰� ������ ������ �ʿ��� �޸� ��뷮 ����                */
/*=============================================================*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);

    printList(head);
    return 0;
}
