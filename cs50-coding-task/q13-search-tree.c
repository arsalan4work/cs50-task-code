#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *left, *right;
} Node;

Node *createNode(int value) {
    Node *newNode = malloc(sizeof(Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node *insert(Node *root, int value) {
    if (!root) return createNode(value);
    if (value < root->data) root->left = insert(root->left, value);
    else root->right = insert(root->right, value);
    return root;
}

int search(Node *root, int value) {
    if (!root) return 0;
    if (root->data == value) return 1;
    return value < root->data ? search(root->left, value) : search(root->right, value);
}

int main() {
    Node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);

    printf("Found 30: %s\n", search(root, 30) ? "Yes" : "No");
    printf("Found 90: %s\n", search(root, 80) ? "Yes" : "No");

    return 0;
}
