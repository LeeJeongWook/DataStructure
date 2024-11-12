#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

typedef struct Item {
    int key;
    int value;
} Item;

Item* hashTable[SIZE];

int hashFunction(int key) {
    return key % SIZE;
}

void insert(int key, int value) {
    int hashIndex = hashFunction(key);
    while (hashTable[hashIndex] != NULL && hashTable[hashIndex]->key != -1) {
        hashIndex = (hashIndex + 1) % SIZE;
    }
    hashTable[hashIndex] = (Item*)malloc(sizeof(Item));
    hashTable[hashIndex]->key = key;
    hashTable[hashIndex]->value = value;
}

int main() {
    insert(1, 10);
    insert(2, 20);
    // �߰����� �˻� �� ��� �ڵ带 �ۼ��� �� ����
    return 0;
}
