#include <stdio.h>
#include <stdlib.h>

// Node structure
struct node {
    int data;
    struct node* next;
};

struct node* createNode(struct node* head, int val) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return head;
}

struct node* insertAtBeginning(struct node* head, int val) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = head;
    head = newNode;
    return head;
}

struct node* deleteAtEnd(struct node* head) {
    if (head == NULL) {
        printf("List is empty!\n");
        return NULL;
    }

    // If only one node
    if (head->next == NULL) {
        printf("Deleted: %d\n", head->data);
        free(head);
        return NULL;
    }

    struct node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    printf("Deleted: %d\n", temp->next->data);
    free(temp->next);
    temp->next = NULL;

    return head;
}

void display(struct node* head) {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct node* head = NULL;
    int choice, val;

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Create\n");
        printf("2. Insert at Beginning\n");
        printf("3. Display\n");
        printf("4. Delete at End\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &val);
                head = createNode(head, val);
                break;
            case 2:
                printf("Enter value: ");
                scanf("%d", &val);
                head = insertAtBeginning(head, val);
                break;
            case 3:
                display(head);
                break;
            case 4:
                head = deleteAtEnd(head);
                break;
            case 5:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
