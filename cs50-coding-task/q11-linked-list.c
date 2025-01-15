#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

void insert(Node **head, int value) {
    Node *newNode = malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

void delete(Node **head, int value) {
    Node *temp = *head, *prev = NULL;
    while (temp && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }
    if (temp) {
        if (prev) prev->next = temp->next;
        else *head = temp->next;
        free(temp);
    }
}

void display(Node *head) {
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    Node *head = NULL;
    insert(&head, 10);
    insert(&head, 20);
    delete(&head, 10);
    display(head);
    return 0;
}
