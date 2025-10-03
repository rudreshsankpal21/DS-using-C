#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next; 
};

struct node* head,*temp,*tail,*newNode;


struct node* createNode(int val){

    newNode = (struct node*)malloc(sizeof(struct node));
    newNode -> data = val;
    newNode -> next = NULL;

    return newNode;
}


struct node* deleteAtEnd(struct node* head) {
    if (head == NULL) {
        printf("List is empty!\n");
        return NULL;
    }

    if (head->next == NULL) {
        free(head);
        return NULL;
    }

    struct node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;

    return head;
}

struct node* printList(struct node* head){
    while (head != NULL)
    {
        printf("%d -> ", head -> data);
        head = head -> next;
    }
    printf("NULL\n");
}

int main(){
   struct node* head = createNode(10);
    head -> next = createNode(20);
    head -> next -> next = createNode(30);
    // head -> next -> next -> next = createNode(40);
    // head -> next -> next -> next -> next = createNode(50);
    printf("Original Linked List\n");
    printList(head);
    head = deleteAtEnd(head);
    printf("\nLinked List after deletion at end\n");
    printList(head);
    return 0;
}