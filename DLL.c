#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* prev;
    struct node* next;
};

struct node* createNode(struct node* head, int val) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = val;
    newNode->prev = NULL;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct node* temp = head;
        while (head->next != NULL) {
            head = head->next;
        }
        head->next = newNode;
        newNode->prev = head;
    }
    return head;
}

struct node* insertAtBeginning(struct node* head, int val) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = val;
    newNode->prev = NULL;
    newNode->next = head;

    if (head != NULL) {
        head->prev = newNode;
    }
    head = newNode;

    return head;
}

void display(struct node* head) {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    struct node* temp = head;
    printf("Doubly Linked List: ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct node* head = NULL;
    int choice, val;

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Create (Append at End)\n");
        printf("2. Display\n");
        printf("3. Insert at Beginning\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &val);
                head = createNode(head, val);
                break;
            case 2:
                display(head);
                break;
            case 3:
                printf("Enter value: ");
                scanf("%d", &val);
                head = insertAtBeginning(head, val);
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
