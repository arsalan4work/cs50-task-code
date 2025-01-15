#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 10  // Size of the hash table

// Node structure for chaining
typedef struct Node {
    int key;
    struct Node *next;
} Node;

// Hash table: array of pointers to linked lists
Node *hashTable[TABLE_SIZE];

// Hash function
int hashFunction(int key) {
    return key % TABLE_SIZE;  // Remainder of key divided by table size
}

// Insert function
void insert(int key) {
    int index = hashFunction(key);

    // Create a new node
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->key = key;
    newNode->next = NULL;

    // Insert at the beginning of the linked list at hashTable[index]
    if (hashTable[index] == NULL) {
        hashTable[index] = newNode;
    } else {
        newNode->next = hashTable[index];
        hashTable[index] = newNode;
    }
    printf("Inserted %d at index %d\n", key, index);
}

// Search function
int search(int key) {
    int index = hashFunction(key);
    Node *current = hashTable[index];

    while (current != NULL) {
        if (current->key == key) return 1;  // Key found
        current = current->next;
    }
    return 0;  // Key not found
}

// Display the hash table
void display() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        printf("Index %d: ", i);
        Node *current = hashTable[i];
        while (current != NULL) {
            printf("%d -> ", current->key);
            current = current->next;
        }
        printf("NULL\n");
    }
}

// Main function
int main() {
    // Initialize hash table
    for (int i = 0; i < TABLE_SIZE; i++) {
        hashTable[i] = NULL;
    }

    // Insert some keys
    insert(5);
    insert(15);
    insert(25);
    insert(35);

    // Display the hash table
    display();

    // Search for a key
    int key;
    printf("Enter a number to search: ");
    scanf("%d", &key);
    if (search(key)) {
        printf("Key %d found in the hash table.\n", key);
    } else {
        printf("Key %d not found in the hash table.\n", key);
    }

    return 0;
}
