/*=============================================================*/
/* 연결 리스트 (Linked List)                                    */
/* 정의: 각 노드가 데이터와 다음 노드에 대한 포인터를 포함하는 구조 */
/* 장점                                                        */
/*  - 동적 크기 조절 가능                                       */
/*  - 삽입/삭제가 배열에 비해 상대적으로 빠름                     */
/*  - (O(1) 시간복잡도, 특정 위치 삽입은 O(n))                   */
/* 단점                                                        */
/*  - 임의 접근이 불가능 (O(n) 탐색)                             */
/*  - 추가 포인터 공간이 필요해 메모리 사용량 증가                */
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
